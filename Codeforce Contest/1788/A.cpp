#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, n_count, k, temp_n_count;

    for (cin>>t; t--;){
        cin >> n;
        int arr[n];
        n_count = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i]==2){
                n_count++;
            }  
        }
        if(n_count % 2 != 0){
            printf("%d\n", -1);
            continue;
        }
        if(n_count == 0){
            printf("%d\n", 1);
            continue;
        }
        temp_n_count = 0;
        for(int i = 0; i < n; i++){
            if (arr[i]==2){
                temp_n_count++;
            }
            if (temp_n_count *2 == n_count){
                printf("%d\n", i+1);
                break;
            }
        }
    }
}