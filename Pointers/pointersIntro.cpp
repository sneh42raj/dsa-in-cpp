#include<iostream>
using namespace std;
int main (){
   int x=4;
   int* p = &x ;
   int y=9;
   int *p2 = &y;
   cout<<&x<<endl<<&y<<endl<<p<<endl<<p2<<endl<<&p<<endl<<&p2;

    // float x=4.9;
    // float* p = &x ;
    // cout<<&x<<endl<<p<<endl<<&p;

    // char x= 'x';
    // char *p = &x ;
    // cout<<&x<<endl<<p<<endl<<&p; //0x61ff08

    // bool x=true;
    // bool* p = &x ;
    // cout<<&x<<endl<<p<<endl<<&p;
}