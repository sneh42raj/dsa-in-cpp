#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"size of the array = ";
    cin>>n;
    //input
    cout<<"elements of array = "; 
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //search
    //check mark
    int x;
    cout<<"element you are trying to find = ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<=n-1;i++){
        if (arr[i]==x) flag = true;
    }
    if(flag == true) cout<<x<<" is present ";
    else cout<<"404 error its not present ";
}  