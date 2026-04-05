#include<iostream>
using namespace std;
int main (){
    int n ,m;
    // cout<<"***"<<endl;
    // cout<<"***"<<endl;
    // cout<<"***"<<endl;

    
    cout<<"enter rows: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i+=1){
        for(int j=1; j<=n; j+=1){
       cout<<"*";
        } 
        cout<<endl;
    }
}