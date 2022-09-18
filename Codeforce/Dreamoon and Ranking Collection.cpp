#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0; i < t; i++){
        int n, x, v = 0;
        cin >> n >> x;

        int arr[101];
        for (int j=1; j < 101; j++) arr[j] = 0;

        for (int j=0; j < n; j++) {
            int k;
            cin >> k;
            arr[k] = arr[k] + 1;
        }

        int j = 1;
        while (1){
            if (x == 0 && (j >= 101 || arr[j] == 0))
                break;
            if (j >= 101 || arr[j] == 0)
                x--;
            v++;
            j++;
        }

        printf("%d \n", v);
    }

}