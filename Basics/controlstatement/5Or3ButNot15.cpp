#include<iostream>
using namespace std ;
int main () {
    int n ;
    cout << "enter a number :" <<endl;
    cin >> n;
    // if ((n%5==0 || n%3==0) && n%15!=0){ 
    //     cout <<"num is divisible" ;
    // }
    // else {
    //     cout <<" condition not fulfilled" ;
    // }

    // nested if 
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            cout<<"condition fulfilled";
        }
        else{cout<<"condition not fulfilled";
        }
    }
    else {
        cout<<"condition not fulfilled";
    }
}