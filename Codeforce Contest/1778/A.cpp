#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, sum, a, prev;
    cin >> t;

    while (t--){
        cin >> n;
        sum = 0;
        prev = 0;
        int has_plus=0, has_minus=0, has_min_minus=0;

        for(int i = 0; i < n; i++){
            cin >> a;
            sum += a;
            if (a == -1)
                has_minus = 1;
            else
                has_plus = 1;

            if(prev == -1 && a == -1){
                has_min_minus = 1;
            }
            prev = a;
        }


        if(has_min_minus)
            sum += 4;
        else if(has_minus == 0 && has_plus)
            sum -= 4;

        cout << sum << endl;
    }
}