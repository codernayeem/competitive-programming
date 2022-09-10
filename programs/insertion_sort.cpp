#include <iostream>
using namespace std;

template <class T>
void insertionSort(T arr[], int n){
    int i, j, temp_i;
    for (i = 1; i < n; i++){
        temp_i = i;
        j = i - 1;
        while(arr[j] > arr[temp_i] && j >= 0){
            swap(arr[j], arr[temp_i]);
            j--;
            temp_i--;
        }
    }
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) cin >> arr[i];

    insertionSort(arr, n);

    for (i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << endl;
}
