#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int score;
    int nextRound = 0;

    for (int i=0; i < n; i++){
        cin >> score;
        if ((score != 0) && (nextRound+1 <= k)){
            nextRound++;
            if (nextRound == k){
                int lastScore = score;
                for (int j=i+1; j < n; j++){
                    cin >> score;
                    if (lastScore == score){
                        nextRound++;
                    }else{
                        break;
                    }
                }
                break;
            }
        }
    }

    cout << nextRound << endl;
}