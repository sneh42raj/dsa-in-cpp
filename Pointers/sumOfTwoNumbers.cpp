#include<iostream>
using namespace std;
int main (){
    // int x,y;
    // cout<<"X = ";
    // cin>>x;
    // cout<<"Y = ";
    // cin>>y;
    // int* p1 = &x;
    // int *p2 = &y;
    // cout<< *p1 + *p2 ;

    int x,y;
    int* p1 = &x;
    int *p2 = &y;
    cout<<"First number = ";
    cin>>*p1;
    cout<<"Second number = ";
    cin>>*p2;
    cout<< *p1 + *p2 ;
    // cout<< x + y ;
}