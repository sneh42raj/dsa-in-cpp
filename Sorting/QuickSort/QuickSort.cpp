#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[], int si, int ei){
    int pivEle = arr[(si+ei)/2];
    int count = 0 ;
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivEle) count++ ;
    }
    int pivIdx = count + si;
    swap(arr[(si+ei)/2], arr[pivIdx]);
    int i = si;
    int j = ei;
    while(i<pivIdx && j>pivIdx){
        if(arr[i]<=pivEle) i++;
        if(arr[j]>pivEle) j--;
        else if(arr[i]>pivEle && arr[j]<=pivEle){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivIdx;
}


void Quicksort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr, si, ei); //first element at its right position 
    Quicksort(arr, si, pi-1); // 
    Quicksort(arr, pi+1, ei);
}


int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    Quicksort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
}