#include<iostream>
#include<string>
using namespace std;
// void Subset(string ans, string ori){
//     if(ori==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = ori[0];
//     Subset(ans+ch, ori.substr(1));
//     Subset(ans, ori.substr(1));
// }
void Subset(string ans, string ori, int idx){
    if(idx==ori.size()){
        cout<<ans<<endl;
        return;
    }
    char ch = ori[idx];
    Subset(ans+ch, ori, idx+1);
    Subset(ans, ori, idx+1);
}
int main(){
    string set = "abc";
    Subset("", set, 0);
}




