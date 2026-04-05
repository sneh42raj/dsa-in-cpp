#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    // if (n%2==0) cout<<"even" ;
    // else cout<<"odd";
    // condition 1 ? condition 2 : condition 2 ;
    (n%2==0) ? cout<<"even" : cout<<"odd" ; 
}