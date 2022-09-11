#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char c[n];
    cin.getline(c, n);
    cin.ignore();

    int mx_st=0, mx_en=0;
    int st=0, i, max_len = 0, cur_len = 0;
    for(i = 0; c[i] != '\000'; i++){
        if(c[i] != ' '){
            cur_len++;
            if(max_len < cur_len){
                max_len = cur_len;
                mx_st = st;
                mx_en = i;
            }
        }else{
            st = i+1;
            cur_len = 0;
        }
    }

    cout << max_len << ' ';
    for (i = mx_st; i <= mx_en; i++){
        cout << c[i];
    }
    cout << endl;
}
