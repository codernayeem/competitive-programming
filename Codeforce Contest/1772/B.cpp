#include<iostream>
using namespace std;

int main(){
    int t, a, b, c, d;
    cin >> t;

    while(t--){
        cin >> a >> b >> c >> d;

        if(((d > c && d > b) && (a < c && a < b)) || 
           ((a > c && a > b) && (d < c && d < b)) || 
           ((b > a && b > d) && (c < a && c < d)) || 
           ((c > a && c > d) && (b < a && b < d)))
           cout << "YES";
        else cout << "NO";

        cout << endl;
    }
    return 0;
}