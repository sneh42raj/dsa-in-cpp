#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int i = 0;
    int j = v.size() - 1;

    while(i < j){
        if(v[i] >= 0){
            i++;   
        }
        else if(v[j] < 0){
            j--;  
        }
        else{
            
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }

}
int main (){
    vector<int> v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(-7);
    v.push_back(8);
    display(v);
    sort01(v);
    display(v);
}