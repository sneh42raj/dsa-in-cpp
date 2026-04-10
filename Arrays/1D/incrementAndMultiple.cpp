#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,59};

    for(int i=0; i<v.size(); i++){
        if(i%2==0){
            v[i]+=10;     
        }
        else{
            v[i]*=2;  
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}