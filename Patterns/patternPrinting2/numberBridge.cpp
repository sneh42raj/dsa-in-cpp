#include<iostream>
using namespace std;
int main () {
    int n ;
    cout<<"enter number: ";
    cin>>n;
    for(int a=1; a<=2*n-1; a++){
        cout<<a ;
    }
    cout<<endl;
    int m=n-1; // third line se loop k liye 
    int nsp=1; // for spaces
    for(int i=1; i<=m; i++){ //loop from 1 to m 
        int b = 1; //extra variable 
        for(int j=1; j<=m+1-i; j++){ // left side wale triangle k liye
            cout<<b; 
            b++; 
        }
        for(int k=1;k<=nsp; k++){ // spaces
            cout<<" ";
            b++;
        }
        nsp+=2; // spaces ka increment 
        for(int l=1; l<=m+1-i; l++){ //right side wale triangle k liye 
            cout<<b;
            b++;
        }
        cout<<endl;
    }
}