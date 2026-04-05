#include<iostream>
using namespace std;
void fun(int x = 5 , int y = 6 ){
    cout<<x <<" "<<y; 
}
int main (){
    fun(4,6);
}