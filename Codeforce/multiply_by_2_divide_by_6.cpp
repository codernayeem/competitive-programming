#include <bits/stdc++.h>
using namespace std;


int main(){
    int t, n;
    cin >> t;
    int ans[t];

    for (int i = 0; i < t; i++){
        cin >> n;
        int move = 0;

        while (n != 1){
            if (n % 3 != 0){
                move = -1;
                break;
            }else if (n % 6 == 0){
                n /= 6;
                move++;
            }else{
                n *= 2;
                move++;
            }
        }
        ans[i] = move;
    }

    for (int i = 0; i < t; i++){
        cout << ans[i] << endl;
    }

}