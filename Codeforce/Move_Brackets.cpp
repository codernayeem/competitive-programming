#include <bits/stdc++.h>
using namespace std;

// 1374C (1000)

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        int opening_brac = 0;

        for (int i = 0; i < n; i++){
            if (s[i] == '(')
                opening_brac++;
            else{
                opening_brac--;
                if(opening_brac == -1){
                    ans++;
                    opening_brac = 0;
                }
            }
        }

        cout << ans << endl;
    }
}
