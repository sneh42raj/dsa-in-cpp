#include<iostream>
using namespace std;
int odd(int x){
    return x%2!=0;
}
int main (){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    int x=min(a,b);
    int y=max(a,b);
    int count=0,sum=0;
    for (int i=x;i<=y;i++){
        if(odd(i)){
            cout<<i<<" ";
            count++;
            sum+=i;
        } 
    }
    cout<<endl<<count <<endl<< sum;
}