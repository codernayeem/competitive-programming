#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    char last_pos = '0';
    int last_pos_count = 0;

    for (int i = 0; i < s.length(); i++){
        if (last_pos == s[i]){
            last_pos_count++;
            if (last_pos_count == 7){
                cout << "YES" << endl;
                exit(0);
            }
        }else{
            last_pos = s[i];
            last_pos_count = 1;
        }
    }
    
    cout << "NO" << endl;
}