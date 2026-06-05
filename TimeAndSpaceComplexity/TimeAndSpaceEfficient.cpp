#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    cout<<"size of array = ";
    cin>>n;
    int arr [n+1] ; 
    
    cout<<"enter " <<n+1<< " elements = "; 
    for(int i=0;i<=n;i++){
    cin>>arr[i];
    }   
    int sum = 0 ;
    for(int i=0 ; i<=n ; i++){
        sum += arr[i];
    }
    int s = n*(n+1)/2 ;
    cout << sum - s << " is dublicate ";
    
}