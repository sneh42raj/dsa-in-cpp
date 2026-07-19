#include<iostream>
#include<string>
using namespace std;
// int n = 2;
void generate(string s, int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0', n);
    if(s=="" || s[s.length()-1] == '0') generate(s+'1', n);
}
int main(){
    int n = 2;
    generate("", n);
}