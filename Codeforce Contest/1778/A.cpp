#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int t, n, sum, a, prev;
    cin >> t;

    while (t--){
        cin >> n;
        sum = prev = 0;
        bool has_plus=false, has_minus=false, has_min_minus=false;

        for(int i = 0; i < n; i++){
            cin >> a;
            sum += a;
            if (a == -1){
                has_minus = true;
                if(prev == -1)
                    has_min_minus = true;
            }else
                has_plus = true;
            
            prev = a;
        }

        if(has_min_minus)
            sum += 4;
        else if(!has_minus && has_plus)
            sum -= 4;

        cout << sum << endl;
    }
}