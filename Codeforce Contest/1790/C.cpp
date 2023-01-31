#include <bits/stdc++.h>
using namespace std;

void getMinMax(int arr[], int l, int &a, int &b){
    for(int i = 0; i < l; i++){
        if (arr[i] != 0){
            if (a == -1)
                a = i + 1;
            else
                b = i + 1;
        }
    }
}

int main(){
    int t, n;
    
    cin >> t;

    while (t--){
        cin >> n;

        int arr[n-1][n];
        int result[n] = {0};
        int item;

        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n; j++){
                arr[i][j] = 0;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++){
                cin >> item;
                arr[j][item-1] += 1;
            }
        }

        for(int j = 0; j < n; j++){
            if (arr[0][j] == n-1)
                result[0] = j+1;
        }

        for(int i = 0; i < n-1; i++){
            int a=-1, b=-1;
            getMinMax(arr[i], n, a, b);

            if (result[i] == a)
                result[i+1] = b;
            else
                result[i+1] = a;
        }

        for(int i = 0; i < n; i++)
            cout << result[i] << " ";
        cout << endl;
    }
    
}