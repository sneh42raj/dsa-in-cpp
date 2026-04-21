#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n ; 
    cout<<"n = ";
    cin>>n;
    int arr[n][n];

    int num = 1;
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    while(top <= bottom && left <= right ){
        for(int j=left ; j<=right ; j++){
            arr[top][j] = num ;
            num++;
        }
        top++;
        for(int i=top ; i<=bottom ; i++){
            arr[i][right] = num ; 
            num++;
        }
        right--;
        for(int j = right; j >= left; j--){
        arr[bottom][j] = num;
        num++;
        }
        bottom--;
        for(int i = bottom; i >= top; i--){
        arr[i][left] = num;
        num++;
        }
        left++;
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
