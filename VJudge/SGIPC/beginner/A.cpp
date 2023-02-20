#include<iostream>
#include<limits.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int t, n, x, min_1, min_2;

    cin >> t;
    while(t--){
        min_1=INT_MAX, min_2=INT_MAX;
        cin >> n;

        for (int i = 0; i<n; i++){
            cin >> x;
            if (x < min_2) min_2 = x;
            if (min_1 > min_2) swap(min_1, min_2);
        }

        cout << min_1+min_2 << "\n";
    }
    return 0;
}