#include <iostream>
#include <algorithm>
using namespace std;

// 492B (1200)

int main(){
    int n;
    long int l;


    cin >> n >> l;
    long int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    float radius = 0;
    
    if (n == 1){
        if (arr[0] == 0 || arr[0] == l)
            radius = l;
        else
            radius = (arr[0] > l-arr[0]) ? arr[0] : l-arr[0];
        printf("%f", radius);

        return 0;
    }

    
    sort(arr, arr+n);

    int new_n = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[new_n]){
            arr[new_n+1] = arr[i];
            new_n++;
        }
    }
    new_n++;

    if (arr[0] != 0)
        radius = arr[0]*2;
    if (arr[n-1] != l && radius < (l-arr[n-1])*2)
        radius = (l-arr[n-1])*2;

    float temp;
    for (int i = 0; i < new_n-1; i++){
        temp = arr[i+1] - arr[i];
        if (radius < temp)
            radius = temp;
    }
    // cout << radius/2.0;
    printf("%f", radius/2.0);

    return 0;
}