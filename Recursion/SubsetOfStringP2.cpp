#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Subset(string ans, string ori, vector<string>& v){
    if(ori==""){
        v.push_back(ans);
        return;
    }
    char ch = ori[0];
    Subset(ans+ch, ori.substr(1), v);
    Subset(ans, ori.substr(1), v);
}
int main(){
    string set = "abc";
    vector<string> v; 
    Subset("", set, v);
    for(string ele : v){
        cout<<ele<<endl;
    }
}