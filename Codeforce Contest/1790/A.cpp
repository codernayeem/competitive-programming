#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, i;
    string s;
    string pi = "314159265358979323846264338327";
    
    cin >> t;


    while (t--){
        cin >> s;

        for(i =0; i < s.length(); i++){
            if (s[i] != pi[i])
                break;
        }
        
        cout << i << endl;
    }
    
}