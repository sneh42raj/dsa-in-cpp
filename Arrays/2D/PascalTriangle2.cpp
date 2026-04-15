#include<iostream>
#include<vector>
using namespace std;
vector<int> getRow(int rowIndex) {
    int m = rowIndex;
    vector<vector<int>> v(m+1);
    for(int i = 0; i <=m; i++){
        v[i].resize(i+1);
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i) v[i][j] = 1;
            else v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }

    return v[m];
}
int main(){
    int m;
    cout<<"enter the size of the triangle : ";
    cin>>m;
    vector<int> v = getRow(m);
    // print
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
        cout<<endl;
}