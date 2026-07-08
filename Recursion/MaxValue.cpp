#include<iostream>
#include <algorithm>
#include<climits>
using namespace std;


int MaxInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx], MaxInArray(arr, n, idx+1));
}


int main(){
    int arr[]={69,5,8,3,2,10,56,7,};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<MaxInArray(arr, n, 0);
}