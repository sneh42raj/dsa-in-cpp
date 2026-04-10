#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main (){
   int m ;
   cout<<"eneter rows of matrix : ";
   cin>> m ;
   int n ;
   cout<<"eneter colms of matrix : ";
   cin>> n ;
    int arr[m][n];
    cout<<"eneter elements of matrix : ";
    for(int i=0 ; i<m; i++){
        for(int j=0 ; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0 ;j<n ;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else {
             for(int j=n-1 ;j>=0 ;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}