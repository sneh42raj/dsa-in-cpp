#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"rows and colums of the martix: ";
    cin >> n;
    int arr[n][n];

    cout<<"elements of matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout << "Diagonal: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0 ;j<n; j++){
            if(i==j || j == n-1-i){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}