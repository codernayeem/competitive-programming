#include <bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin >> w;
    if ((w > 3) && ((w-2) % 2 == 0)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}