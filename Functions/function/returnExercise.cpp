#include <iostream>
using namespace std;
// int doublenum(int x){
//     return 2*x;
// }
// int main (){
//     int n ;
//     cout<<"n = ";
//     cin>>n;
//     cout<<doublenum(n);
// }


// bool isEven(int x){
//     return x%2==0;
// }
// int main (){
//     int n ;
//     cout<<"n = ";
//     cin>>n;
//     if(isEven(n))
//         cout<<"even";
//     else 
//         cout<<"odd";
// }


// int maxNum(int a, int b){
//     if(a>b)
//     return a;
//     else
//     return b; 
// }
// int main (){
//     int a,b ;
//     cout<<"a = ";
//     cin>>a;
//     cout<<"b = ";
//     cin>>b;
//     cout<<maxNum(a,b);
// }


// int sumTillN(int n){
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main (){
//     int n ;
//     cout<<"n = ";
//     cin>>n;
//     cout<<sumTillN(n);
// }

// bool countOdd(int x){
//     return x%2!=0;
// }
// int main (){
//     int a,b ;
//     int x,y;
//     int count=0;
//     cout<<"a = ";
//     cin>>a;
//     cout<<"b = ";
//     cin>>b;
//     if (a<b){
//         x=a;
//         y=b;
//     }
//     else{
//         x=b;
//         y=a;
//     }
//     for (int i=x;i<=y;i++){
//         if(countOdd(i)){
//             count++;
//         }
//     }
//     cout<<count ;
// }


bool isPrime(int n){
    bool flag=true;
    for(int i=2;i<=n-1;i++){
        if (n%i==0){
            flag=false;
        }
    }
    return flag;
}
int main (){
    int n ;
    cout<<"n = ";
    cin>>n;
    cout<<(isPrime);
}