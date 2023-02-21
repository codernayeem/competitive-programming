#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int t, n, x, prev, cnt;
    cin >> t;

    while(t--){
        prev = 0;
        cnt = 0;
        cin >> n;
        
        while (n--){
            cin >> x;
            cnt += (x-prev) / 120;
            prev = x;
        }
        cnt += (1440-prev) / 120;

        if (cnt > 1) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}