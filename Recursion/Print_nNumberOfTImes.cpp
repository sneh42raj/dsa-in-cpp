#include<iostream>
using namespace std;
void print(int n){
    // for(int i=0;i<n;i++){
    //    cout<<"morning"<<endl;
    // }
    // return;
    if(n==0) return;
    cout<<"morning"<<endl;
    print(n-1);
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    print(n);
}