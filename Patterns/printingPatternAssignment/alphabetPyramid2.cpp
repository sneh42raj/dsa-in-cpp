#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1 ;j<=n-i; j++){
            cout<<" "; // for space
        }
        for(int k=i; k>=1; k--){
            cout<<char(k+64); // for left faced trisngle
        }
        for(int l=1;l<=i-1;l++){ // for right face triangle
            cout<<char(l+65); // 65- > so it start from b not a
        } // -1 so it start from next line 
        cout<<endl;
    }       
}