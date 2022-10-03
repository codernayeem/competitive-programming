#include <iostream>
using namespace std;

// 122A (1000)

bool divide(int n, int div){
    if(n % div == 0)
        return true;
    else if(n < div)
        return false;
    
    return divide(n, div*10+4) || divide(n, div*10+7);
}

int main(){
    int n;
    cin >> n;

    if(divide(n, 4) || divide(n, 7))
        cout << "YES";
    else
        cout << "NO";
}