#include <iostream>
using namespace std;
// void greetings () {
//     cout<<"good morning"<<endl;
//     cout<<"have a nice day"<<endl;
// }
// int main (){ // it doesnt matter how many function r in the code main function will run first its absolute and always 
//     greetings(); // function calling 
//     //code
//     greetings();
// }
void starTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main (){
    starTriangle(3);
    starTriangle(4);
    starTriangle(5);
    
}