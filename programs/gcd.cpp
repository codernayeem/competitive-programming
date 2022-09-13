#include <iostream>
using namespace std;

int gcd1(int a, int b){
    while (a != b){
        if (a > b) a = a-b;
        else b = b-a;
    }
    return a;
}

int gcd2(int a, int b){
    int rem;
    while(b != 0){
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{   
    int a = 18, b = 24;

    cout << a << ' ' << b << " --> " << gcd1(a, b) << '\n';
    cout << a << ' ' << b << " --> " << gcd2(a, b) << '\n';

}
