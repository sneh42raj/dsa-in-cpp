#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
}
int count(vector<int>& a,int n){
    int count = 0;
    for(int i=0;i<a.size();i++){
        if (a[i]>n) count++;
    }
    return count;
}
int main (){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    display(v);
    int n=2;
    cout<<count(v,n);
}