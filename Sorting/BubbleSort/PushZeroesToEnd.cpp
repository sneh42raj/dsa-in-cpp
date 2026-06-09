#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main (){
    int arr [] = {1,0,5,4,0,2,6,0,0,3};
    int n=10 ;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
    for (int i=0 ; i<n-1; i++){
        bool flag = true ;  
        for (int j=0 ; j<n-1-i ; j++){
           if (arr[j]==0){
            swap(arr[j],arr[j+1]);
           }
        }
    }
    cout<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}