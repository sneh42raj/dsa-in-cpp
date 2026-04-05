#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void change(vector<int> a){
void change(vector<int>& a){
    a[0]=100;
     for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
int main (){
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(7);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    // vectors are passed by value . each time you pass new vector is created
    // & -> ampercant  
}