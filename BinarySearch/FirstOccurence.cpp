#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main (){
    int arr[] = {1,2,4,5,5,17,21,24,25};
    int n = 9 ;
    int x = 5 ;

    int lo = 0 ;
    int hi = n-1 ;
    bool flag = false ;

    while(lo<=hi){
        int mid = (lo + (hi - lo)/2) ;
        if (arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true ;
                cout<<mid;
                break;
            }
            else {
                hi = mid-1 ;
            }
        }
        else if (arr[mid]<x) lo = mid + 1;
        else hi = mid - 1 ;
    }
    if (flag==false) cout<<-1;
}