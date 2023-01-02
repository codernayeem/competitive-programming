#include <iostream>
using namespace std;

// 1765E (1000)

signed main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        if (a > b) cout << 1;
        else if (n % a == 0) cout << n / a;
        else cout << n / a + 1;
        
        cout << endl;
    }
}
