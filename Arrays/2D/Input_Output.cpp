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