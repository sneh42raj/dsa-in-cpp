#include<iostream>
using namespace std;
int main () {
    int n ;
    cout<<"enter rows: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // for stars
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    // it will only work in certain condition 
    
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if((i+j)>=n+1) cout<<"*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
}
    


