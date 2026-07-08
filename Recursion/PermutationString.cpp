#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Permute(string ans, string orig){
    if(orig==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<orig.length(); i++ ){
        char ch = orig[i];
        string right = orig.substr(0, i);
        string left = orig.substr(i+1);
        Permute(ans+ch , right+left);
    }
}
int main(){
    string str = "abc";
    Permute("", str);
}