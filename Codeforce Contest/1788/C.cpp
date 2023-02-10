#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while (t--){
        cin >> n;
        if (n % 2 == 0) {
            printf("NO\n");
            continue;
        }
        printf("YES\n");

        for(int i = 1; i <= n; i += 2){
            printf("%d %d\n", i, 2*n - i/2);
        }
        int t = 2*n - (n+1)/2;
        for(int i = 2; i < n; i += 2){
            printf("%d %d\n", i, t);
            t--;
        }

    }
}