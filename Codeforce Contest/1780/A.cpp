#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, odd, even, i, a;
    cin >> t;

    while (t--){
        cin >> n;
        int odd_arr[n], even_arr[n];
        odd = even = 0;

        for (i = 1; i <= n; i++){
            cin >> a;
            if(a%2 == 0)
                even_arr[even++] = i;
            else
                odd_arr[odd++] = i;
        }

        if (odd >= 3){
            cout << "YES\n" << odd_arr[0] << " " << odd_arr[1] << " " << odd_arr[2]; 
        }else if (odd != 0 && odd < 3 && even >= 2){
            cout << "YES\n" << odd_arr[0] << " " << even_arr[0] << " " << even_arr[1];
        }else{
            cout << "NO";
        }

        cout << endl;
    }
    
}