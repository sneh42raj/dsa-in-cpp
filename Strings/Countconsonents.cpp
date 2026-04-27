#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s ;
    cout<<"enter your string : ";
    getline(cin , s) ;
    int count = 0 ;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] != ('a') && s[i] != ('e') && s[i] != ('i') && s[i] != ('o') && s[i] != ('u') ) 
        count ++ ;
    }
}    

