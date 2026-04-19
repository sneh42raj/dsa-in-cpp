#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
     vector<string> v = {"flower", "flow", "flight"};
     sort(v.begin(), v.end()) ;
     for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<endl; 
     }
}
