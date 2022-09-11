#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1, c1;
    cin >> r1 >> c1;
    int mat1[r1][c1];
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++) cin >> mat1[i][j];
    }

    int r2, c2;
    cin >> r2 >> c2;
    int mat2[r2][c2];
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++) cin >> mat2[i][j];
    }

    if(c1 != r2) return 1;

    int ans[r1][c2];
    int sum = 0;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            ans[i][j] = 0;
            for(int ii = 0; ii < r2; ii++)
                ans[i][j] += mat1[i][ii] * mat2[ii][j];
        }
    }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++)
            cout << ans[i][j] << ' ';
        cout << endl;
    }

}