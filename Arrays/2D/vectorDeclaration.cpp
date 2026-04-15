#include<iostream>
#include<vector>
using namespace std;

int main(){
    // in 1 D
    // vector<int> v1(5,3); // created a vector of size 5 having all elements 2
    // cout<<v1[0]<<" ";
    // cout<<v1[1]<<" ";
    // cout<<v1[2]<<" ";
    // cout<<v1[3]<<" ";
    // cout<<v1[4]<<" ";

    // in 2 D
    vector < vector<int> > v(3 , vector<int> (4,2)); //having initial value 2
    cout<<v.size()<<endl;
}