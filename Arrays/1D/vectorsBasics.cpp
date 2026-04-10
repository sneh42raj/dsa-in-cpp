#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v; // no need to mention the size
    //for inserting / input do not use []
    v.push_back(1);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(2);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(3);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(4);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // cout<<v.pop_back()<<endl;

    //for updating / access [] can be used 
    // v[0]=6; 
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
}