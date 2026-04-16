#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

   string str = "abcdef";
//    str.substr(index , length)
   cout<<str.substr(2); 
   cout<<str.substr(2 , 3); 
}