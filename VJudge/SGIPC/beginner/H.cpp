#include<iostream>
using namespace std;
 
int main(){
    long long n, c=0;
    cin >> n;
    
    while(n!=0){
        if(n%2 == 0) n /= 2;
        else{
            c++;
            n--;
        }
    }
    cout << c;
    return 0;
}