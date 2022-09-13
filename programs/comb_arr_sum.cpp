#include <iostream>
using namespace std;

// find exact sum from elements of a array
// input <size of array> <needed sum> <array elements>
// input 5 9 1 2 3 5 4
// output --> 5 4
//        --> 1 3 5
//        --> 2 3 4

void usingBits(int arr[], int n, int sum){
    int temp_sum, c = 0;
    for (int i = 1; i < (1 << n); i++){
        temp_sum = 0;
        for (int j = 0; j < n; j++){
            if (i & (1 << j)){
                temp_sum += arr[j];
            }
        }
        if (temp_sum == sum){
            c++;
            cout << "--> ";
            for (int j = 0; j < n; j++){
                if (i & (1 << j)){
                    cout << arr[j] << ' ';
                }
            }
            cout << endl;
        }
    }
    if (c == 0) cout << "=> Found " << c << " possible combination" << endl;
}

int Combination(int a[], int reqLen, int start, int currLen, bool check[], int len, int sum){
    int c = 0, temp_sum;
	if(currLen > reqLen) return c;
	else if (currLen == reqLen){
        temp_sum = 0;
        for (int i = 0; i < len; i++){
			if (check[i] == true){
                temp_sum += a[i];
			}
		}
        if (temp_sum == sum){
            cout << "--> ";
            for (int i = 0; i < len; i++){
                if (check[i] == true){
                    cout << a[i] << " ";
                }
            }
            cout << endl;
            c++;
        }
		return c;
	}
	if (start == len) return c;

	check[start] = true;
	c += Combination(a, reqLen, start + 1, currLen + 1, check, len, sum);
	check[start] = false;
	c += Combination(a, reqLen, start + 1, currLen, check, len, sum);
    return c;
}

int main(){
    int n, sum, i, c = 0;
    cin >> n >> sum;

    int arr[n];
    bool check[n];
    for (i = 0; i < n; i++){
        cin >> arr[i];
        check[i] = false;
    }

    // for(i = 1; i <= n; i++){
	// 	c += Combination(arr, i, 0, 0, check, n, sum);
	// }
    // if (c == 0) cout << "=> Found " << c << " possible combination" << endl;

    usingBits(arr, n, sum);
}
