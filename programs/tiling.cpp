#include <bits/stdc++.h>
using namespace std;


int tiling(int n){
    // same as n'th fibonacci number
    if (n == 1){
        return 1;
    }else if(n < 1){
        return 0;
    }
    return tiling(n-1) + tiling(n-2);
}


int main()
{
    int n = 4;
    cout << "Ways to fill 2 x " << n << " area with 2 x 1 tile are => " << tiling(n) << endl;
}
