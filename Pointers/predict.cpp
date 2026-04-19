#include<iostream>
using namespace std;
int main (){
  int a = 15;
  int *ptr = &a;
//   int b = ++(*ptr); //pre incerement
//   int b = ++*ptr;
    int b = (*ptr)++; // post increment 
  cout<<a<<" "<<b;
}