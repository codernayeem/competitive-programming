#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int len = s1.length();

    for (int i = 0; i < len; i++){
        if (tolower(s1[i]) == tolower(s2[i])){
            if (i+1 == len)
                cout << 0 << endl;
        }else if (tolower(s1[i]) > tolower(s2[i])){
            cout << 1 << endl;
            break;
        }else if (tolower(s1[i]) < tolower(s2[i])){
            cout << -1 << endl;
            break;
        }
    }
}