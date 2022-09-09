#include <iostream>
using namespace std;

template <class T>
void selectionSort(T arr[], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            // if (arr[j] > arr[i]){ // [inverted sort]
            if (arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main(){
    int n, arr[n], i;
    cin >> n;
    for (i = 0; i < n; i++) cin >> arr[i];

    selectionSort(arr, n);

    for (i = 0; i < n; i++) cout << arr[i] << ' ';
}
