#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Permute(vector<string>& v, string ans, string orig){
    if(orig==""){
        v.push_back(ans);
        return;
    }
    for(int i=0; i<orig.length(); i++ ){
        char ch = orig[i];
        string right = orig.substr(0, i);
        string left = orig.substr(i+1);
        Permute(v, ans+ch , right+left);
    }
}
int main(){
    string str = "123";
    vector<string> v;
    Permute(v, "", str);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}