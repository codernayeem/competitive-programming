#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;
 
int main(){
    FAST
    int n, x, prev=0;
    long long moves = 0;
    cin >> n;
    
    while(n--){
        cin >> x;
        if(prev > x) moves += (prev - x);
        else prev = x;
    }
    cout << moves;
    return 0;
}