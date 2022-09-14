#include<bits/stdc++.h>
using namespace std;

bool isSafe(bool **pos, int x, int y, int n){
    for (int i = 0; i <= x; i++){
        if(pos[i][y])
            return false;
    }

    int row = x-1;
    int col = y-1;
    while(row >= 0 && col >= 0){
        if(pos[row][col])
            return false;
        row--;
        col--; 
    }

    row = x-1;
    col = y+1;
    while(row >= 0 && col < n){
        if(pos[row][col])
            return false;
        row--;
        col++; 
    }
    return true;
}

bool nQueen(bool **pos, int x, int n){
    if(x >= n){
        return true;
    }
    
    for(int col = 0; col < n; col++){
        if (isSafe(pos, x, col, n)){
            pos[x][col] = true;
            if (nQueen(pos, x+1, n))
                return true;
            pos[x][col] = false;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    bool** all_pos = new bool*[n];
    for (int i = 0; i < n; i++){
        all_pos[i] = new bool[n];
        for (int j = 0; j < n; j++){
            all_pos[i][j] = false;
        }
    }

    if(nQueen(all_pos, 0, n)){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << all_pos[i][j] << ' ';
            }
            cout << endl;
        }
    }
}
