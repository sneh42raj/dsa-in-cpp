#include<iostream>
using namespace std;
int main () {
    int n ;
    cout<<"enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // for stars
        for(int k=1; k<=2*i-1; k++){
            cout<<k;
        }
        cout<<endl;
    }

    // declare variable 
    // nst (no. of stars in first line )
    // nsp (no. of spaces in the first line )
    
    // int nst = 1; // first line me ek star hai 
    // int nsp = n-1; // first line me n-1 spaces hai
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=nsp; j++){
    //         cout<<" "; // spaces 
    //     }
    //     nsp--;
    //     for(int k=1; k<=nst; k++){
    //         cout<<"*"; //stars
    //     }
    //     nst += 2;
    //     cout<<endl;
    // }
}