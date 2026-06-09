#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main (){
    int arr [6] = {1,5,4,2,6,3};
    int n=6 ;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    // if their are n elements we know max travers n-1 elements 
    for (int i=0 ; i<n-1; i++){

        // trsversing but its kinda iniffecient cause loop is running n-1 everytime
        // though our last element is biggest its still getting checked evertyme
        // for (int j=0 ; j<n-1 ; j++){ 

        // much efficient  

        // we are not checking last element everytime while traversing the loop
        for (int j=0 ; j<n-1-i ; j++){
            if (arr[j] > arr[j+1]){
                // int temp = arr[j] ;
                // arr[j] = arr[j+1] ;
                // arr[j=1] = temp ;
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}