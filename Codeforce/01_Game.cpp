#include <bits/stdc++.h>
using namespace std;

bool make_move(string &s, bool alice_move){
    for(int i = 1; i < s.length(); i++){
        if(s[i] != s[i-1]){
            s = s.substr(0, i-1) + s.substr(i+1);
            return true;
        }
    }
    if(alice_move)
        printf("NET\n");
    else
        printf("DA\n");
    return false;
}

int main()
{
    int t, i;
    cin >> t;
    for (i = 0; i < t; i++){
        string s;
        cin >> s;

        bool alice_move = 1;
        while(make_move(s, alice_move)){
            alice_move = !alice_move;
        }
    }
}
