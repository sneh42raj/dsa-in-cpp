#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main (){
    int arr[] = {1,2,4,5,15,18,19,21,24,25};
    int n = 10 ;
    int x = 23 ;

    int lo = 0 ;
    int hi = n-1 ;
    bool flag = false ;

    while(lo<=hi){
        int mid = (lo + (hi - lo)/2) ;
        if (arr[mid]==x){
            flag = true ;
            cout<<arr[mid-1];
            break;
        }
        else if (arr[mid]<x) lo = mid + 1;
        else hi = mid - 1 ;
    }
    if (flag==false) cout<<arr[hi];
}