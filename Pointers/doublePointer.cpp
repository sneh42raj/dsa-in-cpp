#include<iostream>
using namespace std;
int main (){
    int n = 4;
    int *ptr = &n;
    int **p = &ptr;
    cout<<n<<endl;
    cout<<ptr<<endl;
    cout<<p<<endl;
    cout<<&n<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    cout<<*p<<endl;
}