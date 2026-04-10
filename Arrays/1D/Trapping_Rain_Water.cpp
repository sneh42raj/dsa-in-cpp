#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
} 
int trap(vector<int>& height) {
    int n = height.size();
     // to find previous greatest element 
    int prev [n];
    prev [0] = -1;
    int max = height[0];
    for(int i = 1; i < n; i++){
        prev[i] = max ;
        if(max < height[i]) max = height[i];
    }
    // to find next greatest element -> prev as next
    prev [n-1] = -1;
    max = height[n-1];
    for(int i = n-2; i>=0; i--){
        if(max < prev[i] ) prev [i] = max;
        if(max < height[i]) max = height[i];
    }
    // calculating water
    int water = 0;
    for(int i = 1; i < n-1; i++){
        if (height[i] < prev[i]){
            water += (prev[i] - height[i]);
        }
    }
    return water;
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

    display(v);

    cout << "Water trapped = " << trap(v) << endl;
    
}