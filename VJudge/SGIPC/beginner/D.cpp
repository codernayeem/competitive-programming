#include<iostream>
using namespace std;
 
int main(){
    int t, cnt, x;
    string s;
    cin >> t;
    x = t;

    while(t--){
        cout << "Case " << x-t << ": ";
        cin >> s;
        if (s.at(4) != 's')
            s.insert(4, 1, 's');
        cout << s << "\n";
    }
    return 0;
}