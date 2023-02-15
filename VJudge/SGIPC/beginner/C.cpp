#include<iostream>
using namespace std;
 
int main(){
    int t, c, x;
    signed int n;
    cin >> t;
    x = t;
    while(t--){
        cin >> n;
        c = 0;
        while(n!=0){
            if(n & 1) c++;
            n = n >> 1;
        }
        cout << "Case " << x-t << ": " << ((c % 2) ? "odd" : "even") << "\n";
    }
    return 0;
}