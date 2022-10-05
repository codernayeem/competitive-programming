#include <iostream>
using namespace std;

// 1353C (1000)

# define lli long long int

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        lli layer = (n-1)/2;
        lli ans = 0;

        while(layer){
            ans += 8 * layer * layer;
            layer--;
        }

        cout << ans << endl;
    }
}