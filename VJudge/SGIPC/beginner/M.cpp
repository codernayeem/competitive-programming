#include<iostream>
using namespace std;
 
int main(){
    int n, m, x, y;
    cin >> n;
    int pre_sum[n+1] = {0};

    for(int i = 1; i<=n; i++){
        cin >> pre_sum[i];
        pre_sum[i] += pre_sum[i-1];
    }
    cin >> m;
    while (m--)
    {
        cin >> x >> y;
        cout << pre_sum[y+1]-pre_sum[x] << "\n";
    }
    
    return 0;
}