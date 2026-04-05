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
    if ((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<a<<","<<b<<","<<c<<" are sides of a triangle  ";
    }
    else {
        cout<< "not a triangle";
    }
}