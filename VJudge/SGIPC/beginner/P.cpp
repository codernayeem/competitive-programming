#include<iostream>
#include<algorithm>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
#define M_PI 3.14159265358979323846
using namespace std;
 
int main(){
    FAST
    int n, r=0, sign=1;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);

    for(int i = n-1; i>=0; i--){
        r = r + sign * arr[i] * arr[i];
        sign = -sign;
    }
    cout << r*M_PI;
    return 0;
}