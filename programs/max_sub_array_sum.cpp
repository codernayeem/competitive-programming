#include <iostream>
using namespace std;

int main()
{
    int n, best_sum = 0, x;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        if (x > 0) best_sum += x;
    }

    cout << best_sum << endl;
}
