#include <iostream>
using namespace std;

// 1204A (1000)

signed main()
{
    string s;
    cin >> s;

    int n = s.length();
    int ans = (n-1) / 2;

    if (n % 2 == 0){
        ans += 1;
    }else{
        for(int i = 1; i < n; i++){
            if(s[i] == '1'){
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
}
