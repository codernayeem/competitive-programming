#include <iostream>
using namespace std;

// 742A (1000)

int main(){
    long int n;
    cin >> n;

    if (n == 0){
        cout << 1 << endl;
        return 0;
    }

    int ans;
    
    switch (n%4)
    {
    case 1:
        ans = 8;
        break;
    case 2:
        ans = 4;
        break;
    case 3:
        ans = 2;
        break;
    default:
        ans = 6;
        break;
    }

    cout << ans << endl;
}