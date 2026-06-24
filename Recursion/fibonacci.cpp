#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<fibo(n);
}