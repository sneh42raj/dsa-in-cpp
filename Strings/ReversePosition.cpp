#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

   string str ;
   cout<<"enter the string : ";
   getline(cin , str);
//    its given to reverse position 2 to 5 
   reverse(str.begin()+1,str.begin()+5);
//    we use 1 and 4 cause our indexes are starting from 0
//    so position 2 is index 1 and position 5 is index 4 , but we always give 1 extrs for ending 
   cout<<str<<" "; 
}