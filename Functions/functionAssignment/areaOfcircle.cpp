#include<iostream>
using namespace std;
float area(int r){
    return 3.14*r*r;
}
int main (){
     float r;
     cout<<"enter raddi r: ";
     cin>>r;
     cout<<"area of circle is: "<<area(r);
}