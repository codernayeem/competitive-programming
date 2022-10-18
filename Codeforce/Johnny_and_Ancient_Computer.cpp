#include <iostream>
using namespace std;

// 1362A (1000)

int main(){
    int t;
    cin >> t;

    while(t--){

        long long int n, m;
        cin >> n >> m;

        if (m == n){
            cout << 0 << endl;
            continue;
        }

        if (n > m) swap(n, m);
        if (m % n != 0){
            cout << -1 << endl;
            continue;
        }

        long long dif = m / n;
        long long moves = 0;

        while(dif % 8 == 0){
            moves++;
            dif /= 8;
        }

        while(dif % 4 == 0){
            moves++;
            dif /= 4;
        }

        while(dif % 2 == 0){
            moves++;
            dif /= 2;
        }

        if (dif != 1)
            moves = -1;

        cout << moves << endl;
    }
}