#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    string str ;
    cout<<"enter the string : ";
    getline(cin,str);
    string temp ;
    stringstream ss(str) ;
    while(ss>>temp){
        cout<<temp<<endl;
    }
   
}    

