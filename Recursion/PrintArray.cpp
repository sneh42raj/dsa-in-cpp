#include<iostream>
using namespace std;
void print(int a[], int n, int idx){
    if(idx==n) return;
    cout<<a[idx]<<" ";
    print(a,n,idx+1);
}
int main(){
    int a[]={0,8,5,4,9,3,1,7,69};
    int n = sizeof(a)/sizeof(a[0]);
    print(a,n,0);
}