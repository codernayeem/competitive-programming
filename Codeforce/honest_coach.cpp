#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) cin >> arr[j];

        sort(arr, arr + n);

        int min_diff = INT_MAX;
        for (int j = 1; j < n; j++){
            min_diff = min(min_diff, arr[j] - arr[j-1]);
        }
        cout << min_diff << endl;
    }
}
