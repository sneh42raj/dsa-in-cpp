#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
}
int countGreater(vector<int>& v ,int n ){
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>n) cnt++;
    }
    return cnt;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    display(v);
    cout<<endl;
    int n;
    cout<<"n = ";
    cin>>n;
    int result = countGreater(v , n);
    cout<<"count of the element greater than "<<n<<" are "<<result<<endl ;
    return 0;
}