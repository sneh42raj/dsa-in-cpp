#include<iostream>
using namespace std;
int main () {
      int n ;
    cout<<"enter rows: "<<endl;
    cin>>n;
    int k=1;
//     for(int i=1; i<=n; i++){
//         if(i%2!=0) k=1; // if row is odd print 1
//         else k=0 ;  // else print 0
//         for(int j=1; j<=i; j++){
//             if (k==1) k=0; // flipping
//             else k=1;
//            cout<<k<<" ";

//         }
//         cout<<endl;
//     }

    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
        if((i+j)%2==0) cout<<1;
        else cout<<0;
      }
      cout<<endl;
    }
}
