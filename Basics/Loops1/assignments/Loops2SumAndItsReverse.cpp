// -> WAP to print the sum of a given number and its reverse 

#include<iostream>
using namespace std;
int main () {
  int n;
    cout<<"Enter a number : ";
    cin>>n;
    int lastdigit = 0;
    int reverse = 0;
    int sum=n;
    while(n>0){
         reverse *= 10;
        lastdigit = n%10;
        reverse += lastdigit;
        n/=10;
    }
    cout<<reverse + sum <<endl;
    cout<<lastdigit;
}