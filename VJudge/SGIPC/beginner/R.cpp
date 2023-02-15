#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int n, x=0, temp, large=0;
    cin >> n;
    int arr[n+2];
    arr[0] = 0;
    arr[n+1] = 360;

    for(int i = 1; i<=n; i++){
        cin >> temp;
        x += temp;
        arr[i] = x%360;
    }
    sort(arr, arr+n+1);
    for(int i = 1; i<n+2; i++){
        if((arr[i] - arr[i-1]) > large) large = arr[i] - arr[i-1];
    }
    cout << large;
    return 0;
}