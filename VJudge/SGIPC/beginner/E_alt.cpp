#include<iostream>
using namespace std;
 
int main(){
    int n, c=0, i, j, temp;
    cin >> n;

    for(i = 1; i<=n; i += 2){
        temp = 0;
        for (j = 1; j<=i; j += 2)
            if(i%j == 0)
                temp++;
        if (temp==8)
            c++;
    }
    cout << c << "\n";

    return 0;
}
