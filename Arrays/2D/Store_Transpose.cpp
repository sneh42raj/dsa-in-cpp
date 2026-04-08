#include<iostream>
using namespace std;
int main (){
    // for input
    int m;
    cout<<"enter no. of rows / columns = ";
    cin>>m;

    int arr[m][m];
     
    cout<<"enter elements of arrays : ";
    cout<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
     }
     cout<<endl;

     // for output
     for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
    for(int i=0; i<m ; i++){
        for(int j=i+1 ; j<m ; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp ; 
        }
    }
    // printing the transpose matrix 
    for(int i=0; i<m ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}