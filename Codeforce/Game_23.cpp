#include <iostream>
using namespace std;

// 1141A (1000)

int main(){
    int n, m;
    cin >> n >> m;

    if (m % n != 0){
        cout << -1 << endl;
        return 0;
    }

    int dif = m / n;
    int moves = 0;

    while(dif % 2 == 0){
        moves++;
        dif /= 2;
    }

    while(dif % 3 == 0){
        moves++;
        dif /= 3;
    }

    if (dif != 1)
        moves = -1;

    cout << moves << endl;
}