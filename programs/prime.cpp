#include <iostream>
using namespace std;

bool isPrime(int n){
    int div = 2;
    while(n > div){
        if(n % div == 0)
            return false;
        div += 1;
    }
    return (n < 2) ? false : true;
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        if (isPrime(i+1))
            cout << i+1 << ' ';
    }
    cout << endl;
}