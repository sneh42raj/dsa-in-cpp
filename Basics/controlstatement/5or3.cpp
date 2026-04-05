#include<iostream>
using namespace std ;
int main () {
    int n ;
    cout << "enter a number :" <<endl;
    cin >> n;
    if (n%5==0 || n%3==0){ 
        cout <<"num is divisible" ;
    }
    else {
        cout <<" num is not divisible" ;
    }
}
