#include<iostream>
using namespace std ;
int main () {
    char ch;
    cout<<"inter a alphabet :"<<endl;
    cin>>ch;
    int ascii = (int)ch;
    if ((ascii>=97 && ascii<=112) || (ascii>=65 && ascii<=90)){
        if (ch=='a'|| ch=='A' || ch=='e'|| ch=='E' || ch=='i'|| ch=='I' || ch=='o'|| ch=='O' || ch=='u'|| ch=='U'){
            cout<<"the chareacter is vowel ";
        }
        else{
            cout<<"the character is a consonant";
        }
    }
    else{
        cout<<"character is not an alphabet";
    }
}
