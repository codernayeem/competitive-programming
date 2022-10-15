#include <iostream>
using namespace std;

# define lli long int

// 268B (1000)

int main(){
    int n;
    cin >> n;

    lli ans = 0;

    for(int i = 1; i < n; i++){
        ans += i * (n-i);
    }

    ans += n;

    cout << ans << endl;
}


// 1
// 2
// 3
// 4
// 5 1
// 5 2
// 5 3
// 5 4
// 5 4 1
// 5 4 2
// 5 4 3 1

// 5 4 3 2 1


// 4 * 1
// 3 * 2
// 2 * 3
// 1 * 4

// +5