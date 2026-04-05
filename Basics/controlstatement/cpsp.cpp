#include<iostream>
using namespace std ;
int main (){
    int cp , sp ;
    cout << " enter cp :" <<endl ;
    cin >> cp ;
    cout << " enter sp : " <<endl ;
    cin >> sp ;
    if (sp>cp){
        cout << " profit = " <<sp-cp << "rupees";
    }
    if (sp<cp){
        cout << "loss = " <<cp-sp << "rupees" ;   
    }
    if (sp==cp){
            cout << " No profit No loss! " ;
        } 
    
}
