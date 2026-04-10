#include<iostream>
using namespace std;
int main (){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    for(int i=0;i<=4;i++){
        // cout<<*ptr<<" ";
        // ptr++;
        // OR
        // cout<<ptr[i]<<" ";
        // OR
        // cout<<i[ptr]<<" ";
        // OR
        cout<<i[arr]<<" ";
    }
    ptr=arr; // ptr is pointing at 1st element 
    *ptr=6 ;  //ptr[0]=0;
    ptr++; // ptr is pointing at 2st element
    *ptr=9;
    ptr--; // ptr is pointing at 1st element 
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;


}