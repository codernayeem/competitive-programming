#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n){
    if (n == 0 || n == 1)
        return;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubbleSort(arr, n - 1);
}

int main(){
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) cin >> arr[i];

    bubbleSort(arr, n);

    for (i = 0; i < n; i++) cout << arr[i] << ' ';
}
