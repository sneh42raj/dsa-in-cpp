#include<iostream>
using namespace std ;
int main () {
    char ch;
    cout<<"inter a alphabet :"<<endl;
    cin>>ch;
    int ascii = (int)ch;
    if ((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=112)){
         cout<<"the chareacter is alphabet ";
    }
    else {
        cout<<"The character is not an alphabet ";
    }
   
}