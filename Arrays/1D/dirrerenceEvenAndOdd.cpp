#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6};

    int even = 0;
    int odd = 0;

    for(int i = 0; i < v.size(); i++){
        if(i % 2 == 0)
            odd += v[i];
        else
            even += v[i];
    }

    int diff = even - odd;

    cout<<"Difference = "<<diff;
}