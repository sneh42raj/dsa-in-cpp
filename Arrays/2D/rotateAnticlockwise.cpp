#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"rows and colums of the martix: ";
    cin >> n;
    int arr[n][n];

    cout<<"elements of matrix "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout<<endl;

    // Step 1: Transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Step 2: Reverse top and bottom column 
    for(int j=0;j<n;j++){
        int top = 0, bottom = n-1;
        while(top < bottom){
            int temp = arr[top][j];
            arr[top][j] = arr[bottom][j];
            arr[bottom][j] = temp;
            top++;
            bottom--;
        }
    }

    // output
    cout << "Rotated Matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}