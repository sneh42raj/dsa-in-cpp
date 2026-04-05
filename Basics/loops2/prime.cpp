#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<" Enter the number : ";
    cin>>n;
    bool flag=true; // we using true for prime 
    for(int i=2;i<=n-1;i+=1){
        if (n%i==0) // finding factors of n 
        flag=false; // n is composite
        break;
    }
    if(n==1) cout<<" 1 is neither prime nor composite ";
    else if (flag==true) cout<<n<<" is prime";
    else cout<<n<<" is composite";
}