#include<iostream>
#include<string>
using namespace std;

int main(){

   string s ;
   cout<<"enter the string : ";
   getline(cin , s);
   for(int i=0 ; s[i]!='\0'; i++ ){
    if(i%2==0) s[i] = 'a';
   }
   cout<<s<<endl;


   // -> in c++ strings are mutable
   // -> in java strings are immutable
}