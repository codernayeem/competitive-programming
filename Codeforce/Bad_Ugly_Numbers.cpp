#include <iostream>
using namespace std;

// 1326A (1000)

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        if (n == 1) cout << -1;
        else{
            cout << 2;
            n = n - 1;
            while(n--){
                cout << 3;
            }
        }

        cout << endl;
    }
}