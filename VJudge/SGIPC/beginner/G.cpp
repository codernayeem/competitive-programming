#include<iostream>
using namespace std;

int gcd(int x, int y){
    if(x<y) swap(x, y);
    while (y != 0) {
        int mod = x % y;
        x = y;
        y = mod;
    }
    return x;
}
 
int main(){
    int t, n, q;
    cin >> t;
    
    while(t--){
        cin >> n >> q;
        int arr[n], pre_gcd[n], post_gcd[n];

        cin >> arr[0];
        pre_gcd[0] = arr[0];

        for(int i = 1; i<n; i++){
            cin >> arr[i];
            pre_gcd[i] = gcd(pre_gcd[i-1], arr[i]);
        }

        post_gcd[n-1] = arr[n-1];
        for(int i = n-2; i>=0; i--){
            post_gcd[i] = gcd(post_gcd[i+1], arr[i]);
        }

        int L, R;
        while(q--){
            cin >> L >> R;
            if (L==1) cout << post_gcd[R];
            else if (R==n) cout << pre_gcd[L-2];
            else cout << gcd(post_gcd[R], pre_gcd[L-2]);
            printf("\n");
        }
    }
    return 0;
}