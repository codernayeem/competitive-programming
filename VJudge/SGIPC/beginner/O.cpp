#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int r1, r2, c1, c2, d1, d2, a, b, c, d;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    
    a = r1-r2+c1-c2;
    if(a%2 != 0){
        cout << -1;
        return 0;
    }
    a = a/2 + d1;
    if(a%2 != 0){
        cout << -1;
        return 0;
    }
    a /= 2;
    b = r1-a;
    c = d2-b;
    d = c2-b;
    
    if(b+c != d2 || a==b || b==c || a==c || a==d || b==d || c==d || a<1 || b<1 || c<1 || d<1 || a>9 || b>9 || c>9 || d>9 ) cout << -1;
    else cout << a << " " << b << " " << "\n" << c << " " << d;
    return 0;
}