#include<iostream>
using namespace std;
 
int main(){
    int n, x, prev=0;
    long long moves = 0;
    cin >> n;
    
    while(n--){
        cin >> x;
        if(prev > x) moves += (prev - x);
        else prev = x;
    }
    cout << moves;
    return 0;
}