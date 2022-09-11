#include<bits/stdc++.h>
using namespace std;

// sorted matrix search

int main(){
    int r, c, item;
    cin >> r >> c >> item;
    int mat[r][c];
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++) cin >> mat[i][j];
    }

    int row = 0, col = c-1;
    bool flag = 0;
    while(row < r && col >= 0){
        if (mat[row][col] == item){
            cout << row << ' ' << col;
            flag = 1;
            break;
        }else if(mat[row][col] > item){
            col--;
        }else{
            row++;
        }
    }

    if (!flag) cout << -1 << ' ' << -1;

}