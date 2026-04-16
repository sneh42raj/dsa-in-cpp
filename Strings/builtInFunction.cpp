#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

   string s = "abcdefgh";
   cout<<s<<endl;

  // s.size() Or s.length() gives length of string 

  // s.push_back() pushes only single character 

  // s.pop_back() pop an element from last 

    // // s += "1234" ;
    // // s = "xyz" + s +;
    // s = "xyz" + s + "123";
    // cout<<s<<endl;
    // + operator add 2 strings 

    // reverse(s.begin(),s.end());
    // reverse(s.begin()+2,s.end()-1);
    reverse(s.begin()+2,s.begin()+6);
    cout<<s<<endl;

}