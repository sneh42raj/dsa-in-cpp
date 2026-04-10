#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main (){
   int m ;
   cout<<"eneter rows of 1st matrix : ";
   cin>> m ;
   int n ;
   cout<<"eneter colms of 1st matrix : ";
   cin>> n ;

   int p ;
   cout<<"eneter rows of 2nd matrix : ";
   cin>> p ;
   int q ;
   cout<<"eneter colms of 2nd matrix : ";
   cin>> q ;
   if(n==p){
        int a[m][n];
        cout<< "eneter elements of 1st matrix : ";
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<< "eneter elements of 2st matrix : ";
        for(int i = 0 ; i < p ; i++){
            for(int j = 0 ; j < q ; j++){
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < q ; j++){
                res[i][j] = 0;
                for(int k = 0 ; k < p ; k++){
                    res[i][j] += a[i][k] * b[k][j] ;
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < q ; j++){
                cout<<res[i][j]<<" " ; 
            }
            cout<<endl;
        }
    }
    else{
        cout<<"cannot be multiplied : ";
    }
}