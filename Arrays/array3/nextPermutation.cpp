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
void nextPermutaion(vector<int>& v ){
    int n = v.size();
    // finding pivot element 
    int idx = -1;
    for(int i = n-2 ; i >= 0 ; i-- ){
        if(v[i]<v[i + 1]){
            idx = i ; 
            break ;
        }
    }
    if (idx == -1){
        reverse(v.begin() , v.end());
        return;
    }
    int j = -1;
    for(int i = idx + 1; i < n ; i++){
        if (v[i] > v[idx]){
            j = i ;
            break;
        }
    }
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp; 
    return;
}
int main(){
    
}