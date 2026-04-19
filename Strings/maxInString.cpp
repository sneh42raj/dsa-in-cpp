#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    // -> input
    string str; 
    cout<<"enter the string: ";
    getline(cin, str); 

    // -> to get one word
    stringstream ss(str);
    string temp;

    // ini.. 
    int max = INT_MIN;
    string maxS;

    // compare 
    while(ss >> temp){   
        int x = stoi(temp);

        // max -> number maxS -> string 
        if(x > max){
            max = x;
            maxS = temp;
        }
    }

    cout << max << " " << maxS << endl;
}
