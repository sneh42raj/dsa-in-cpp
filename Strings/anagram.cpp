#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s , t; 
    cout<< "enter first string : ";
    getline(cin,s); 
    sort(s.begin(),s.end()) ; 

    // string t ; 
    cout<< "enter second string : ";
    getline(cin,t); 
    sort(t.begin(),t.end()) ;

    if(s==t) cout << true ;
    else cout << false ;
   
}    

