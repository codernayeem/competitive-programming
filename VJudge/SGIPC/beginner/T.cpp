#include<iostream>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
    string s;

    while(m-- && n>3){
        cin >> s;
        if(s == "out") n--;
        else n++;
    }
    if(n<4) cout << "YES";
    else cout << "NO";

    return 0;
}