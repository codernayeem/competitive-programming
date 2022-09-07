#include <iostream>
using namespace std;

// find exact sum of sub array
// input <size of array> <needed sum> <array elements>
// input 5 9 1 2 3 4 5
// output 2 + 3 + 4

void printResult(int arr[], int i, int j){
    for (; i < j+1; i++) cout << arr[i] << ((i == j) ? "\n" : " + ");
}

void findSum(int arr[], int n, int sum){
    int temp_sum = 0, c = 0;
    for (int i = 0; i < n; i++){
        temp_sum = 0;
        for (int j = i; j < n; j++){
            temp_sum += arr[j];
            if (temp_sum == sum){
                printResult(arr, i, j);
                c++;
            };
        }
    }
    if (c == 0) cout << "Not Possible" << endl;
}

int main()
{
    int n, sum;
    cin >> n >> sum;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    findSum(arr, n, sum);
}
