#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Subset(int arr[], int n, vector<int> v, int idx, int k ){
    if(idx==n){
        if(v.size()==k){
            for(int ele : v){
                cout<<ele<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if((v.size()+(n-idx)) < k) return; 
    Subset(arr, n, v, idx+1, k);
    v.push_back(arr[idx]);
    Subset(arr, n, v, idx+1, k);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k = 3;
    Subset(arr, n, v, 0, k);
}