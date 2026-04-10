#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void largestThree(vector<int>& a, int& flar, int& slar, int& tlar){
    flar = slar = tlar = INT_MIN;
    for(int i=0;i<a.size();i++){
        if(a[i]>flar){
           tlar = slar;
           slar = flar;
           flar = a[i];
        }
            else if (a[i]>slar && flar != a[i]){
                tlar = slar;
                slar = a[i];
            }
                else if (a[i]>tlar && slar!=a[i]){
                    tlar = a[i];
                } 
    }
   
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(69);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    display(v);

   int flar, slar, tlar;

    largestThree(v, flar, slar, tlar);

    cout<<"First = "<<flar<<endl;
    cout<<"Second = "<<slar<<endl;
    cout<<"Third = "<<tlar<<endl;
}