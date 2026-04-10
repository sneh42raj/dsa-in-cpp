#include<iostream>
using namespace std;
int main (){
  int arr[5];
  //first index address
  cout<<&arr<<endl;
  cout<<arr<<endl;
  //address of arr using indexed
  cout<<&arr[0]<<endl;
  cout<<&arr[1]<<endl;
  cout<<&arr[2]<<endl;
  cout<<&arr[3]<<endl;
  cout<<&arr[4]<<endl;
}