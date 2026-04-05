#include<iostream>
using namespace std;
// int fact(int n){
//     int f=1;
//     for(int i=2;i<=n;i++){
//         f *= i;
//     }
//     return f;
// }
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<fact(i)<<endl;
//     }
// }
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *= i;
        cout<<fact<<endl;
    }
}