#include <bits/stdc++.h>
using namespace std;

void printCombinations(string s, string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    printCombinations(ros, ans);
    printCombinations(ros, ans + ch);
}

void printPermutation(string s, string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }

    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i+1);
        printPermutation(ros, ans + ch);
    }
}

int main()
{
    string s = "ABC";
    
    printCombinations(s, "");

    printPermutation(s, "");
}
