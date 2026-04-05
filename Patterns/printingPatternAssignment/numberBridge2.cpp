#include<iostream>
using namespace std;
int main () {
    int n ;
    cout<<"enter number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){ // for printing 1 to 7 no in first line
       int a=i; // using an extra variable
       if(a>n) a=2*n-i; // assigning pseudo no. to 567 and making them 321  
       cout<<a;
    }
    cout<<endl;
    int nsp=1;// using extra variable for space (no. of space) 
    int m=n-1;// to start code from 2nd line 
    for(int i=1;i<=m;i++){ // 
        for(int j=1;j<=m+1-i;j++){
            cout<<j;// for left side triangle 
        }
         for(int k=1;k<=nsp;k++){
            cout<<" "; // for spaces 
         }
          nsp+=2;
          for(int l=m-i+1;l>=1;l--){
            cout<<l; // for right side triangle 
          }
          cout<<endl;
    }
}