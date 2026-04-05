#include<iostream>
using namespace std;
int main (){
    int a,b,c ;
    cout<<"enter 1st number :"<<endl ;
    cin>>a ;
    cout<<"enter 2nd number :"<<endl ;
    cin>>b;
    cout<<"enter 3rd number :"<<endl ;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else {
            cout<<c<<" is greatest";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
}