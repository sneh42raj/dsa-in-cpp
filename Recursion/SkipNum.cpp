#include<iostream>
#include<vector>
using namespace std;
void removeNums(vector<int>& ans, vector<int>& v, int idx){
    if(idx==v.size()){
        for(int x : ans)
        cout << x << " ";
        return;
    }
    int num = v[idx];
    if(num==1) removeNums(ans, v, idx+1);
    else {
        ans.push_back(v[idx]);
        removeNums(ans, v, idx+1);
        ans.pop_back();
    }
}
int main(){
    int arr[] = {1,2,3,4,5,1,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> v(arr, arr + n);
    vector<int> ans;
    removeNums(ans, v, 0);
}


