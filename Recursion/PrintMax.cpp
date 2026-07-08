#include<iostream>
#include<climits>
using namespace std;
void Max(int a[], int n, int idx, int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<a[idx]) max=a[idx];
    Max(a, n, idx+1, max);
}
int main(){
    int a[]={0,8,5,4,9,3,1,7,69};
    int n = sizeof(a)/sizeof(a[0]);
    Max(a, n, 0, INT_MIN);
}