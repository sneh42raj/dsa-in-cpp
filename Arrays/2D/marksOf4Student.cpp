#include<iostream>
using namespace std;
int main (){
    // for input
    int m = 2;

    int n = 4;

    int arr[m][n];

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
     }
     
     // for output
     for(int i=0 ; i<=m-1 ; i++){
        for(int j=0 ; j<=n-1 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
}