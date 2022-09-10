#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    cin >> t;

    for (int j = 0; j < t; j++){
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];

        int max_ = -1, rec_break = 0;

        for (i = 0; i < n; i++){
            if (max_ < arr[i] && (i+1 == n || arr[i] > arr[i+1])){
                rec_break++;
            }
            max_ = max(max_, arr[i]);
        }
        cout << j+1 << ' ' << rec_break << endl;
    }
}
