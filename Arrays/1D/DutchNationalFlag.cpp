#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
} 
void SortColor(vector<int>& v){
    int n = v.size();
    int low = 0 ;
    int mid = 0 ;
    int hi = n-1 ;
    while (mid <= hi) {
        if (v[mid] == 2) {
            // swaping can be done by using temp or 
            // swap(v[mid] , v[hi])
            v[mid] = v[hi] ;
            v[hi] = 2;
            hi -- ;
        }
        else if (v[mid] == 0){
            // swaping can be done by using temp or 
            // swap(v[mid] , v[low])
            v[mid] = v[low] ;
            v[low] = 0 ;
            low ++ ;
            mid ++ ;
        }
        else mid ++ ;
    } 
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    display(v);
    SortColor(v);
    display(v);
}