#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int t, n, x;
    cin >> t;
    while (t--){
        cin >> n >> x;
        bool all_first_found = false;
        int value, sum=0, first=0, last=0;

        for(int i = 0; i<n; i++){
            cin >> value;
            sum += value;
            if (!all_first_found){
                if(value%x) all_first_found = true;
                else first++;
            }
            if (value%x) last = 0;
            else last++;
        }

        if (sum%x) cout << n;
        else if(first == n && last == n) cout << -1;
        else cout << n-1-min(first, last);
        cout << "\n";
    }
    return 0;
}