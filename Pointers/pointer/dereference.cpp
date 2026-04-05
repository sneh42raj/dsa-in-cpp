#include<iostream>
using namespace std;
int main (){
   int x=69;
   int *p = &x;
   cout<<*p<<endl;
//    x=6;
    *p = 9; 
   cout<<x<<endl;
}