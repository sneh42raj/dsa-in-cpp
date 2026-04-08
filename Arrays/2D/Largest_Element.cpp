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

    cout<<"enter elements of arrays : ";

    int arr[m][n];

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
     }
     int max = INT_MIN;
     for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
     }
     cout<<max;
}