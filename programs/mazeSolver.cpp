#include <iostream>
using namespace std;

// Get a solve of maze as soon as possible
// It might not be the best solve

string fancyStyle = "Xo."; // "<obstacle><free space><solution path>"
bool fancy = 1;

void printMaze(int** pos, int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(fancy)
                cout << fancyStyle[pos[i][j]] << ' ';
            else
                cout << pos[i][j] << ' ';
        }
        cout << "\n";
    }
}

bool isSafe(int** pos, int row, int col, int x, int y){
    return (x < row && y < col && pos[x][y] == 1);
}

bool solveMaze(int** pos, int row, int col, int x, int y, int en_x, int en_y){
    if (x == en_x && y == en_y){
        pos[x][y] = 2;
        return true;
    }
    
    if (isSafe(pos, row, col, x, y)){
        pos[x][y] = 2;

        if(solveMaze(pos, row, col, x+1, y, en_x, en_y) || solveMaze(pos, row, col, x, y+1, en_x, en_y) || solveMaze(pos, row, col, x-1, y, en_x, en_y) || solveMaze(pos, row, col, x, y-1, en_x, en_y))
            return true;
        
        pos[x][y] = 1; // backtracking
    }
    return false;
}

int main(){
    int row, col;
    cin >> row >> col;

    // save input in heap
    int** arr = new int*[row];
    for (int i = 0; i < row; i++){
        arr[i] = new int[col];
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];
    }
    
    cout << "\n";
    if(solveMaze(arr, row, col, 0, 0, row-1, col-1))
        printMaze(arr, row, col);
    else
        cout << 0 << "\n";
}

// input
// 5 5
// 1 0 1 1 1
// 1 0 1 0 1
// 1 1 1 0 1
// 0 0 0 1 1
// 1 1 1 1 1

// output [normal]
// 2 0 2 2 2
// 2 0 2 0 2
// 2 2 2 0 2
// 0 0 0 1 2
// 1 1 1 1 2

// output [fancy]
// . X . . . 
// . X . X . 
// . . . X . 
// X X X O . 
// O O O O .
