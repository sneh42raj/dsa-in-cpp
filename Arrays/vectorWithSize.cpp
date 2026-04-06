#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v(5);
    // vector<int> v(5,7); // initial size is five and each element has value seven 
    cout<<v.size()<<endl;
    cout<<v[0];
}