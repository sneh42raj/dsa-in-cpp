#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main (){
    bool flag = true;
    int arr [] = {1,1,3,4} ; 
    int n = 4 ;
    for (int i = 0 ; i < n-1 ; i++){
        if(arr[i] > arr[i+1]){
            flag = false;
            break;
        }
    }
    if (flag==true ) cout<<"sorted ";
    else cout << "not sorted ";
}