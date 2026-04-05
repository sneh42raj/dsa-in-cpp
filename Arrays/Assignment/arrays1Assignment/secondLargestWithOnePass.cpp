#include<iostream>
#include<limits.h>
using namespace std;
int main (){
    int n;
    cout<<"size of the arrya = ";
    cin>>n;
    int arr[n];
    cout<<"elements of arrays = ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int larg=INT_MIN;
    int slarg=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(larg<arr[i]){
            slarg=larg;
            larg=arr[i];
        }
        else if(arr[i] > slarg && arr[i] != larg){
            slarg = arr[i];
        }
    }
   if(slarg == INT_MIN)
        cout<<"No second largest";
    else
        cout<<"Second largest = "<<slarg;

}