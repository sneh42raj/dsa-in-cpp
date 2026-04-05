#include<iostream>
using namespace std;
int squ (int n){
    for(int i=1; i<=n; i++){
    cout<< i*i<<endl; 
    }
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    squ(n);
}
// int squ(int x){
//     return x*x;
// }
// int main (){
//      int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<< squ(i)<<" ";
//     }
//     cout<<endl; 
// }