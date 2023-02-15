#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int t, N, Ac, x, y;
    ll profit;
    cin >> t;
    while (t--){
        profit = 0;
        cin >> N >> Ac;
        int pre_C[N+1] = {0}, D[N];

        for(int i = 0; i<N; i++) {
            cin >> x >> D[i];
            pre_C[i+1] = pre_C[i] + Ac - x;
        }

        int min, max, p;
        for (int i = 0; i<N; i++){
            min = D[i];
            max = D[i];
            for (int j = i; j<N; j++){
                if(D[j] > max) max = D[j];
                if(D[j] < min) min = D[j];
                p = pre_C[j+1] - pre_C[i] - (max-min)*(max-min);
                if (p > profit) profit = p;
            }
        }
        cout << profit << endl;
    }
    return 0;
}