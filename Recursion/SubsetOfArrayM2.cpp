#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Subset(int arr[], int n, vector<int> v, int idx){
    if(idx==n){
        for(int ele : v)
            cout<<ele<<" ";
            cout<<endl;
            return;
    }
    Subset(arr, n, v, idx+1);
    v.push_back(arr[idx]);
    Subset(arr, n, v, idx+1);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    Subset(arr, n, v, 0);
}