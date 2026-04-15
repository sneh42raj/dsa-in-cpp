#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > pascal(int numRows){
    int m = numRows;
    vector< vector<int> > v;

    // pushing vector in our above vector
    for(int i=0;i<m;i++){
         
    //so we get 1 in 0th row and so on 
        vector<int> a(i+1);
        v.push_back(a);
        for(int j=0;j<=i;j++){

    // loop for the size or more like grid 
            if(j==0 || j==i) v[i][j] = 1;
            else {
    // stores the sum of element exactly above it and the element left side of it 
                v[i][j] = v[i-1][j] + v[i-1][j-1] ;

            }
        }
    } 
    return v ;
}
int main(){
    int m;
    cout<<"enter the size of the triangle : ";
    cin>>m;
    vector< vector<int> > v = pascal(m);
    // print
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}