#include<iostream>
#include<vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid) {
    int rows = grid.size();
    int colm = grid[0].size();

    // Step 1: Make first column all 1
    for(int i = 0 ; i < rows ; i++){
        if(grid[i][0] == 0){
            for(int j = 0 ; j < colm ; j++){
                grid[i][j] = 1 - grid[i][j];   // cleaner flip
            }
        }
    }

    // Step 2: Flip columns if needed
    for(int j = 0 ; j < colm ; j++){
        int noz = 0, noo = 0;

        for(int i = 0 ; i < rows ; i++){
            if(grid[i][j] == 0) noz++;
            else noo++;
        }

        if(noz > noo){
            for(int i = 0 ; i < rows ; i++){
                grid[i][j] = 1 - grid[i][j];
            }
        }
    }

    // Step 3: Calculate score
    int sum = 0;
    for(int i = 0 ; i < rows ; i++){
        int x = 1;
        for(int j = colm - 1 ; j >= 0 ; j--){
            sum += grid[i][j] * x;
            x *= 2;
        }
    }

    return sum;
}

int main(){
    vector<vector<int>> grid = {
        {0,0,1,1},
        {1,0,1,0},
        {1,1,0,0}
    };

    int result = matrixScore(grid);

    cout << "Score = " << result << endl;
}