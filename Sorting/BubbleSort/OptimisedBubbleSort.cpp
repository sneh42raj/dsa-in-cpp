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
    
    for (int i=0 ; i<n-1; i++){
        bool flag = true ;  
        for (int j=0 ; j<n-1-i ; j++){
           if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = false ; // swap happned 
           }
        }
        if (flag == true) break; // swap didnt happened 
    }
    cout<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}