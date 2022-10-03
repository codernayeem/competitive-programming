#include <iostream>
using namespace std;

// 1342A (1000)

# define lli long long int

int main(){
    int t;
    cin >> t;

    while(t--){
        lli x, y, a, b;
        cin >> x >> y >> a >> b;

        if (x > y) swap(x, y);

        lli ans;

        if ((x > 0 && y > 0) || (x < 0 && y < 0)){
            ans = a * (y-x) + b * abs(x);
            lli temp = a * abs(x) + a * abs(y);

            ans = min(ans, temp);
        }else
            ans = a * abs(x) + a * y;

        cout << ans << endl;
    }
}