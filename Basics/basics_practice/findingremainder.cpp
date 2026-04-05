#include<iostream>
using namespace std ;
int main () {
       int a = 10 ; // a is divident
       int b = 3 ; // b is divisor
       int q = a/b ; //q is quotient 
       int r ; // r is remainder 
       // a = {( b * q ) + r } formula jo ki hm log bachpan se padhte aaye hai 
       r = a - ( b* q ) ;
       cout << q ;
       cout << endl ;
       cout << r ;
} 