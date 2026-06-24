#include<iostream>
using namespace std;
int Maze(int row, int col){
    if(row<1 || col<1) return 0; // out of maze
    if(row==1 && col==1) return 1; // destination(1,1)
    int rightWays=Maze(row, col-1); //right
    int downWays=Maze(row-1, col); // down
    int totalWays=rightWays + downWays;
    return totalWays;
}
void printPath(int row, int col, string s){
    if(row<1 || col<1) return; // out of maze
    if(row==1 && col==1){ //destination
        cout<<s<<endl;
        return;
    }
    printPath(row, col-1, s+'R'); //right
    printPath(row-1, col, s+'D'); //down
}
int main(){
    cout<<"Total paths are "<<Maze(2,2);
    cout<<endl;
    printPath(2,2,"");
}