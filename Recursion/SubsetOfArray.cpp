#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Subset(vector<int>& ans, vector<int>& v, int idx){
    if(idx==v.size()){
        for(int ele : ans)
            cout<<ele<<" ";
            cout<<endl;
            return;
    }
    Subset(ans, v, idx+1);
    ans.push_back(v[idx]);
    Subset(ans, v, idx+1);
    ans.pop_back();
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr + n);
    vector<int> ans;
    Subset(ans, v, 0);
}