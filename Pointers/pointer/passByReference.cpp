#include<iostream>
using namespace std;
void swap(int *a , int *b){
    int temp = *a;
    *a = *b ;
    *b = temp ;
    return ;
}
int main (){
     int a,b ;
     cout<<"enter a: ";
     cin>>a;
     cout<<"enter b: ";
     cin>>b;
     int *x = &a;
     int *y = &b;  
    //  swap(&a,&b);
    swap(x,y);  
     cout<<a<<" "<<b;
}