#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n ;
    cout<<"size of the array = ";
    cin>>n;
     int arr[n+1];
    //input
    cout<<"elements of array = "; 
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // bool flag = true ;
    // for(int i = 0 ; i < arr.size() ; i++){
    //     for (int j = i + 1 ; j < arr.size() ; j++){
    //         if(arr[i] == arr[j]) 
    //         cout << arr[i];
    //         flag = true ;
    //         break;
    //     }
    // }
    // if (flag == true) 
    // break;
}
