#include<iostream>
using namespace std;
int main () {
    int n ;
    cout << "enter a number :"<<endl ;
    cin >> n;
    if (n>99 && n<999){
        cout << " three digit number " ;
    }
    else {
        cout << "not a three digit number ";
    }

}