#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, s, r;
    
    cin >> t;

    while (t--){
        cin >> n >> s >> r;

        int arr[n];
        for(int i = 0; i < n-1; i++)
            arr[i] = 0;
        arr[n-1] = s-r;

        for(int i = 0; (i < n-1) && (r != 0); i++){
            arr[i] = arr[i] + 1;
            r--;

            if (i+1 == n-1){
                i = -1;
            }
        }

        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    
}