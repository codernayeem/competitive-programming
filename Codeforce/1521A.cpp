#include <iostream>
using namespace std;

// 1521A (1000)

#define ll long long int

ll divide(ll z, ll B){
    ll x = 1;

    for(ll y = z-x; x != y && y != 0; x++, y--){
        if (x % B != 0 && y % B != 0){
            return x;
        }
    }
    return 0;
}

int main(){
    ll t, A, B, x, y, z;
    cin >> t;

    while(t--){
        cin >> A >> B;
        if (B == 1){
            cout << "NO" << endl;
            continue;
        }


        for (ll i = 1; i <= 1000; i++){
            z = i * B;
            x = divide(z, B);
            if (x){
                cout << "YES" << endl << x*A << " " << (z-x)*A << " " << z*A << endl;
                break;
            }
        }
        if (!x)
            cout << "NO" << endl;
    }
    return 0;
}