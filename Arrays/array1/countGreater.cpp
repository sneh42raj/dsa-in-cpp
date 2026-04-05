#include<iostream>
#include<climits>
using namespace std;
int main (){
    int n ;
    cout<<"size of the array = ";
    cin>>n;
     int arr[n];
    //input
    cout<<"elements of array = "; 
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // counter 
    int x;
    cout<<" X = ";
    cin>>x;
    int count = 0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<" there are "<<count<<" number greather than x ";
}