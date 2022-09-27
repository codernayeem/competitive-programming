#include <bits/stdc++.h>
using namespace std;

// 69A

int main(){
    int n;
    cin >> n;

    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;

    for (int i = 0; i < n; i++){
        int cor;
        cin >> cor;
        sum_x += cor;

        cin >> cor;
        sum_y += cor;

        cin >> cor;
        sum_z += cor;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}