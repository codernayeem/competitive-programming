#include<iostream>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    FAST
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int g, lonely_d=0, choice;
        bool flag = false, king[n+1]={false};

        for(int d=1; d<=n; d++){
            cin >> choice;
            flag = false;
            while(choice--){
                cin >> g;
                if (!flag && !king[g]){
                    king[g] = true;
                    flag = true;
                }
            }
            if(!flag && !lonely_d) lonely_d = d;
        }

        int free_prince = 0;
        if (lonely_d){
            for(int d=1; d<=n; d++){
                if (!king[d]) {
                    free_prince = d;
                    break;
                }
            }
        }
        if(free_prince) cout << "IMPROVE\n" << lonely_d << " " << free_prince << "\n";
        else cout << "OPTIMAL\n";
    }
    return 0;
}