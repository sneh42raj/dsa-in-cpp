#include<iostream>
using namespace std;
int fun(int x,int y){
    cout<<"fun x "<<&x<<endl;
    cout<<"fun y "<<&y<<endl;
}
int main (){
    int x;
    int y;
    cout<<"main x "<<&x<<endl;
    cout<<"main y "<<&y<<endl;
    fun(x,y);
}