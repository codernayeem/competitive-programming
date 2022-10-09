#include <iostream>
using namespace std;

# define lli long long int

// 577A (1000)

int main(){
    int n, c = 0;
    lli x;
    cin >> n >> x;

    for (int i = 1; i <= n; i++){
        if(x % i == 0 && x / i <= n){
            c++;
        }
    }
    
    cout << c << endl;
}