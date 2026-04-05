#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a=0 , b=1, sum=a+b;
    for(int i=1;i<=n;i+=1){
        cout<<b<<" ";
        a=b;
        b=sum;
        sum=a+b;
    }
}