#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Subset(string ans, string ori, vector<string>& v, bool flag){
    if(ori==""){
        v.push_back(ans);
        return;
    }
    char ch = ori[0];
    if(ori.length()==1){
        if(flag==true) Subset(ans+ch, ori.substr(1), v, true);
        Subset(ans, ori.substr(1), v, true);
        return;
    }
    char dh = ori[1];
    if(ch==dh){
        if(flag==true) Subset(ans+ch, ori.substr(1), v, true);
        Subset(ans, ori.substr(1), v, false);
    }
    else{
        if(flag==true) Subset(ans+ch, ori.substr(1), v, true);
        Subset(ans, ori.substr(1), v, true);
    }
}
int main(){
    string set = "aab";
    vector<string> v; 
    Subset("", set, v, true);
    for(string ele : v){
        cout<<ele<<endl;
    }
} 