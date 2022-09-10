#include <iostream>
using namespace std;

int main(){
    int n, i, long_len = 1;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) cin >> arr[i];

    for (i = 0; i < n-1; i++){
        int temp_len = 1;
        int diff = arr[i+1] - arr[i];
        for(int j = i+1; j < n; j++){
            if (diff == arr[j] - arr[j-1]) temp_len++;
            else break;
        }
        long_len = max(long_len, temp_len);
    }

    cout << long_len << endl;
}
