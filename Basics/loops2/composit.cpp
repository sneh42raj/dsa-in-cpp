#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter a number :"<<" ";
    cin>>n;
    for(int i=2;i<=n-1;i+=1){
        if(n%i==0){
            cout<<n<<"Is a composite num... ";
            break;
         }          
    }
}