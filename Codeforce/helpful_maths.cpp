#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int len = s.length();
    int arr_size = (len+1)/2;
    int arr[arr_size];
    int j = 0;
    for (int i = 0; i < len; i++){
        if (s[i] != '+'){
            arr[j] = int(s[i])-48;
            j++;
        }
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    for(int i =0; i < arr_size; i++){
        cout << arr[i];
        if (i+1 != arr_size){
            cout << '+';
        }
    }

    cout << endl;
}