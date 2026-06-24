#include<iostream>
using namespace std;
int Maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays=Maze(sr,sc+1,er,ec);
    int downWays=Maze(sr+1,sc,er,ec);
    int totalWays=rightWays + downWays;
    return totalWays;
}
void printPath(int sr, int sc, int er, int ec, string s){
    if(sc>ec || sr>er) return; // out of maze
    if(sr==er && sc==ec){ //destination
        cout<<s<<endl;
        return;
    }
    printPath(sr+1, sc, er, ec, s+'R'); //right
    printPath(sr, sc+1, er, ec, s+'D'); //down
}
int main(){
    cout<<"Total paths are "<<Maze(0,0,2,2);
    cout<<endl;
    printPath(0,0,2,2,"");
}