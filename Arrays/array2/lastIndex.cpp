#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(7);
    v.push_back(1);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    int x=7;
    int idx=-1;

    //forward loop
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx=i;
    // }

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x)
        idx=i;
        break;
    }
    cout<<idx;  
}