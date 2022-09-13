#include <iostream>
#include <cmath>
using namespace std;


int getBit(int n, int pos){
    return (n & (1 << pos)) != 0;
}

int setBit(int n, int pos){
    return n | (1 << pos);
}

int clearBit(int n, int pos){
    return n & ~(1 << pos);
}

int updateBit(int n, int pos, int value){
    n = n & ~(1 << pos);
    return n | (value << pos);
}

bool isPowerOf2(int n){
    return (n && !(n & n-1));
}

int numberOfOnes(int n){
    int c = 0;
    while(n){
        n = n & n-1;
        c++;
    }
    return c;
}

void printSubSet(int arr[], int n){
    // to get 2^n ---> (1 << n)
    for (int i = 1; i < (1 << n); i++){
        for (int j = 0; j < n; j++){
            if (i & (1 << j)){ // check if {j}th bit of {i} is 1 or not
                cout << arr[j] << ' ';
            }
        }
        cout << endl;
    }
}

int unique(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

void twoUnique(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum = xorsum ^ arr[i];
    }

    int setbitPos = 0;
    while(!(xorsum & 1 << setbitPos)){
        setbitPos++;
    }

    int newxor = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] & 1 << setbitPos){
            newxor = newxor ^ arr[i];
        }
    }

    cout << "two unique -> " << newxor << ' ' << (newxor ^ xorsum) << '\n';
}

int threeUnique(int arr[], int n){
    int sum, result = 0;
    for (int i = 0; i < 64; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            sum += getBit(arr[j], i);
        }
        if (sum % 3){
            result = setBit(result, i);
        }
    }
    return result;
}

int main(){
    int n = 5;
    // cin >> n;

    cout << n << ' ' << getBit(n, 2) << endl;

    n = setBit(n, 1);
    cout << n << endl;

    n = clearBit(n, 1);
    cout << n << endl;

    n = updateBit(n, 1, 1);
    cout << n << endl;

    n = 8;
    cout << n  << " isPowerOf2 -> " << isPowerOf2(n) << endl;

    cout << n << " numberOfOnes -> " << numberOfOnes(n) << endl;

    int arr1[3] = {4, 5, 9};
    printSubSet(arr1, 3);

    int arr2[7] = {4, 6, 4, 5, 9, 5, 9};
    cout << "unique -> " << unique(arr2, 7) << endl;

    int arr3[8] = {4, 6, 4, 5, 8, 9, 5, 9};
    twoUnique(arr3, 8);

    int arr4[7] = {1, 1, 1, 3, 2, 2, 2};
    cout << "Unique -> " << threeUnique(arr4, 7) << endl;
}
