#include<iostream>
using namespace std;
void odd(int a, int b){
    int x,y;
    if (a>b){
        x=a;
        y=b;
    }
    else{
        x=b;
        y=a;
    }
    for(int i=y;i<=x;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
int main (){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    odd(a,b);
}