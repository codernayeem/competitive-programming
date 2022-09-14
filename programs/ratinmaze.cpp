#include <iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    if (x < n && y < n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** SolArr){

    if(x == n-1 && y == n-1){
        SolArr[x][y] = 1;
        return true;
    }

    if(isSafe(arr, x, y, n)){
        SolArr[x][y] = 1;

        if(ratInMaze(arr, x+1, y, n, SolArr)){
            return true;
        }else if(ratInMaze(arr, x, y+1, n, SolArr)){
            return true;
        }
        SolArr[x][y] = 0;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    // save input in heap
    int** arr = new int*[n];
    int** solArr = new int*[n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[n];
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            solArr[i][j] = 0;
        }
    }
    
    cout << endl;

    if(ratInMaze(arr, 0, 0, n, solArr)){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << solArr[i][j] << ' ';
            }
            cout << endl;
        }
    }else{
        cout << 0 << endl;
    }
}

// input
// 5
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

// output
// 1 0 0 0 0
// 1 1 1 1 0
// 0 0 0 1 0
// 0 0 0 1 1
// 0 0 0 0 1