#include <iostream>
using namespace std;

void primeSieve(int n){
    bool prime[n+1]; // false means prime

    for(int i = 2; i <= n; i++){
        if(!prime[i]){
            for(int j = i*i; j <= n; j += i){
                prime[j] = true;
            }
            cout << i << ' ';
        }
    }
    cout << endl;
}

void primeFactor(int n){
    int spf[n+1] = {0};

    for(int i = 2; i <= n; i++){
        spf[i] = i;
    }
    for(int i = 2; i <= n; i++){
        if (spf[i] == i){
            for(int j = i*i; j <= n; j += i){
                spf[j] = i;
            }
        }
    }

    while(n != 1){
        cout << spf[n] << ' ';
        n = n / spf[n];
    }
    cout << endl;
}


int main()
{
    int n = 50;
    // cin >> n;
    
    // primeSieve(n);

    primeFactor(48);

}
