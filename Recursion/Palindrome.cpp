#include<iostream>
#include<string>
using namespace std;
bool IsPalindrome(string s, int i, int j){
    if(i<j) return true;
    if(s[i]!=s[j]) return false;
    IsPalindrome(s, i+1, j-1);
}
int main(){
    string str = "mom";
    cout<<IsPalindrome(str, 0, str.length()-1);
}