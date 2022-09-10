#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int item, int start, int end){
    int mid = (start + end) / 2;
    if (arr[mid] == item)
        return mid;
    else if(start == end)
        return -1;
    else if (arr[mid] > item)
        return binarySearch(arr, item, start, mid-1);
    else
        return binarySearch(arr, item, mid+1, end);
}

int main()
{
    int n, item, arr[n], i;
    cin >> n >> item;
    for (i = 0; i < n; i++) cin >> arr[i];

    cout << binarySearch(arr, item, 0, n-1) << endl;
}
