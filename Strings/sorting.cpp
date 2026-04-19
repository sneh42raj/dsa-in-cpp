#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s ; 
    cout<< "enter a string : ";
   getline(cin,s); 
    sort(s.begin(),s.end()) ;
    cout<<s;
}    

