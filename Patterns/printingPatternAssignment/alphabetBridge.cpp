#include<iostream>
using namespace std;
int main () {
    int n ;
    cout<<"enter number: ";
    cin>>n;
    for(int a=1; a<=2*n-1; a++){
        cout<<char(a+64);
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=m;i++){
        int b=1;
        for(int j=1; j<=m+1-i;j++){
            cout<<char(b+64);
             b++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            b++;
        }
         nsp+=2; 
        for(int l=1; l<=m+1-i; l++){ 
            cout<<char(b+64);
            b++;
        }
        cout<<endl;
    }
}