#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    // for(int i=1 ;i<=n ;i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=2*i-1; k++){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }

    // by using nsp and nst
    int nst=1;
    int nsp=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1; k<=nst; k++){
            cout<<k;
        }
        nst+=2;
        cout<<endl;
    }
}