#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}
int combi(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));//we r calling fact n fact r and fact n-r 
    return ncr;
}
int permu(int n, int r){
    int npr = fact(n)/fact(r);
    return npr;
}
int main (){
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;
    // int nfact=fact(n);
    // int rfact=fact(r);
    // int nrfact=fact(n-r);
    
    // int nfact=1; //n!
    // for(int i=2;i<=n;i++){
    //     nfact *= i;
    // }
    // int rfact=1; //r!
    // for(int i=2;i<=r;i++){
    //     rfact *= i;
    // }
    // int nrfact=1; //(n-r)!
    // for(int i=2;i<=n-r;i++){
    //     nrfact *= i;
    // }
    // int ncr = nfact/(rfact*nrfact);
    // cout<<ncr;

    int ncr=combi(n,r);
    int npr=permu(n,r);
    cout<<ncr<<endl<<npr;
}