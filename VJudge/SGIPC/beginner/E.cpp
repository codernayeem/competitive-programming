#include<iostream>
using namespace std;
 
int main(){
    int n, c = 0;
    cin >> n;

    if (n >= 195) c = 5;
    else if (n >= 189) c = 4;
    else if (n >= 165) c = 3;
    else if (n >= 135) c = 2;
    else if (n >= 105) c = 1;

    cout << c;
    return 0;
}