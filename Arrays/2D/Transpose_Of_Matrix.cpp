#include<iostream>
using namespace std;
int main (){
    // for input
    int m;
    cout<<"rows = ";
    cin>>m;

    int n;
    cout<<"column = ";
    cin>>n;

    cout<<"enter elements of arrays : ";
    cout<<endl;

    int arr[m][n];

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
     }
     cout<<endl;

     // for output
     for(int i=0 ; i<=m-1 ; i++){
        for(int j=0 ; j<=n-1 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
    //  printing transpose
     for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
     }
     
}