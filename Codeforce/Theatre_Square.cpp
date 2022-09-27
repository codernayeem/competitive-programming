#include <bits/stdc++.h>
using namespace std;

// 1A

int main()
{
    signed int n, m, a;
    cin >> n >> m >> a;

    long long int ans;

    if (n <= a)
        ans = 1;
    else{
        ans = n / a;
        if (n % a != 0)
            ans += 1;
    }

    if (!(m <= a)){
        signed int temp = m / a;
        if (m % a != 0)
            temp += 1;
        ans *= temp;
    }

    cout << ans << endl;
}
