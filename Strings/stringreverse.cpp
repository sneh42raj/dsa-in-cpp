#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

   string s ;
   cout<<"enter the string : ";
   getline(cin , s);
   int n = s.size();
//    reverse(s.begin()+n/2,s.end());
//    cout<<s<<endl;

    string first = s.substr(0, n/2);
    // start from 0 and travel half 
     
    string second = s.substr(n/2);
    // start from half and travel till end
    
    reverse(second.begin(), second.end()); 
    cout << first + second;

    
}