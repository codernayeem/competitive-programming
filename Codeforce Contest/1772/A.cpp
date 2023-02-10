#include<iostream>
using namespace std;

int main(){
    int t, r;
    char c;
    cin >> t;

    while(t--){
        cin >> c;
        r = c - '0';
        cin >> c >> c;
        r += c - '0';
        cout << r << endl;
    }
    return 0;
}