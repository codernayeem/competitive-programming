#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << 2 << endl;

        if(n==2){
            cout << "1 2\n";
            continue;
        }
        cout << n-2 << ' ' << n << '\n' << n-1 << ' ' << n-1 << '\n'; 

        for(int i = n-1; i>=3; i--){
            cout << i-2 << ' ' << i << '\n'; 
        }
    }
    return 0;
}