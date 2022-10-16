#include <bits/stdc++.h>
using namespace std;

// 1469B (1000)

int main(){
    int t;
    cin >> t;

    while (t--){
        int n, m;
        
        cin >> n;
        int arr_r[n];
        for (int i = 0; i < n; i++) cin >> arr_r[i];
        
        cin >> m;
        int arr_b[m];
        for (int i = 0; i < m; i++) cin >> arr_b[i];

        int max_r = 0;
        int temp_max_r = 0;
        for (int i = 0; i < n; i++){
            temp_max_r += arr_r[i];
            max_r = max(max_r, temp_max_r);
        }

        int max_b = 0;
        int temp_max_b = 0;
        for (int i = 0; i < m; i++){
            temp_max_b += arr_b[i];
            max_b = max(max_b, temp_max_b);
        }

        cout << max_b + max_r << endl;
    }
}