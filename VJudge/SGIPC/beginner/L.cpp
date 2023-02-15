#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << 2 << "\n";

        if(n==2){
            printf("1 2\n");
            continue;
        }
        printf("%d %d\n%d %d\n", n-2, n, n-1, n-1);

        for(int i = n-1; i>=3; i--){
            printf("%d %d\n", i-2, i);
        }
    }
    return 0;
}