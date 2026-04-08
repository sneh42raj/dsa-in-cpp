#include<iostream>
#include<climits>
using namespace std;
int main (){
    // for input
    int m;
    cout<<"rows = ";
    cin>>m;

    int n;
    cout<<"column = ";
    cin>>n;

    int arr[m][n];
    cout<<"enter elements of arrays : ";

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
     }
     int sum = 0;
     for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
           sum += arr[i][j];
        }
     }
     cout<<sum;
}