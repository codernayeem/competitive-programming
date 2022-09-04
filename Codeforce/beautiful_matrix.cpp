#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c, i, value, moves;

    for (i = 0; i < 25; i++){
        cin >> value;
        if (value == 1){
            r = (i+1) / 5;
            c = (i+1) % 5;
            if (c != 0)
                r += 1;
            else if (c == 0)
                c = 5;
            moves = abs(3 - r) + abs(3 - c);
        }
    }
    cout << moves << endl;
}