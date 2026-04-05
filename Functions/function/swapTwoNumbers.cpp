#include<iostream>
using namespace std;
int main (){
     int a,b ;
     cout<<"enter a: ";
     cin>>a;
     cout<<"enter b: ";
     cin>>b;
     int temp=a;
     a = b ;
     b = temp;
     cout<<a<<" "<<b; 
}