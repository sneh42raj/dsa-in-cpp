#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Permute(string ans, string orig, vector <string>& result){
    if(orig==""){
        result.push_back(ans);
        return;
    }
    for(int i=0; i<orig.length(); i++ ){
        char ch = orig[i];
        string right = orig.substr(0, i);
        string left = orig.substr(i+1);
        Permute(ans+ch , right+left, result);
    }
}
int main(){
    string str = "abcd";
    vector <string> result;
    Permute("", str , result);
    for(string ele : result){
        cout<<ele<<endl;
    }
}