#include<iostream>
using namespace std;
void swap(int a , int b){
    int temp = a;
    a = b ;
    b = temp ;
    return ;
}
int main (){
     int a,b ;
     cout<<"enter a: ";
     cin>>a;
     cout<<"enter b: ";
     cin>>b;  
    //  a = a + b;
    //  b = a - b;
    //  a = a - b; 
    swap(a,b); // pass by value not by refrene
     cout<<a<<" "<<b; // main ki a & b print horahe hai void function ki nahi 
}