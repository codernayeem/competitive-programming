#include <bits/stdc++.h>
using namespace std;

#define lli long long int

void checkOddDivisor(lli n){
    if(n % 2 == 0)
        checkOddDivisor(n/2);
    else if(n == 1)
        printf("NO\n");
    else
        printf("YES\n");
}

int main()
{
    int t;
    lli n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        checkOddDivisor(n);
    }
}
