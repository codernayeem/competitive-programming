#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int t, l;
    string s;
    cin >> t;

    while(t--){
        cin >> s;
        l = s.length();
        if (l % 2 == 0 && s[0] != ')' && s[l-1] != '(') cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}