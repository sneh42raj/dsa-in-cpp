#include<iostream>
#include<string>
using namespace std;
// void removeChar(string ans, string ori){
//     if(ori.size()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = ori[0];
//     if(ch=='a') removeChar(ans, ori.substr(1));
//     else removeChar(ans+ch, ori.substr(1));
// }
void removeChar(string ans, string ori, int indx){
    if(indx == ori.size()){
        cout<<ans;
        return;
    }
    char ch = ori[indx];
    if(ch=='a') removeChar(ans, ori, indx+1);
    else removeChar(ans+ch, ori, indx+1);
}
int main(){
    string str = "akdaj aizen" ;
    removeChar("", str, 0);
}


