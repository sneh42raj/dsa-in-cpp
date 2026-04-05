// -> 1111
//    2222
//    3333
//    4444

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter num: ";
    cin>>n; 

    // for ( int i=1; i<=n; i++){
    //     for (int j=1; j<=n; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }


    // -> 1234
    //    123
    //    12
    //    1

    //  for (int i=1; i<=n; i++){
    //     for (int j=1; j<=n+1-i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // -> A
    //    AB
    //    ABC
    //    ACBD

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<char(j+64);
    //     }
    //     cout<<endl;
    // }


    // -> 1
    //    AB
    //    123
    //    ABCD

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         if (i%2!=0) cout<<j;
    //         else cout<<char(j+64);
    //     }
    //     cout<<endl;
    // }


    // -> *
    //    **
    //    ***
    //    ****
    //    ***
    //    **
    //    *

    // for(int i=1; i<=n; i+=1){ // for right angle triangle
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }

    // for(int k=n-1; k>=1; k--){ // for inverted triangle
    //     for(int l=k; l>=1; l--){
    //             cout<<"*";
    //     }
    //         cout<<endl;
    // } 
    
    
    // ->  ******
    //     *    *
    //     *    * 
    //     ******
    // n(column)=4 m(rows)=6

    // int n,m;
    // cout<<"enter row: "; 
    // cin>>m;
    // cout<<"enter column: ";
    // cin>>n;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=n; j++){
    //         if (i==1 || i==m || j==1 || j==n) cout<<"*";
    //         else cout<<" ";
    //     }cout<<endl;
    // }


    // square printing

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // num triangle

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // alphabet triangle

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<char(64+j);
    //     }
    //     cout<<endl;
    // }


    // num triangle 2

    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }


}