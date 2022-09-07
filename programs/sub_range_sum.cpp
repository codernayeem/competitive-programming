#include <iostream>
using namespace std;

// find exact sum of sub number array
// input <start> <end> <step> <needed sum>
// input 1 100 1 80
// output 14 + 15 + 16 + 17 + 18
//        80

void printResult(int start, int end, int step){
    for (;start <= end; start += step){
        if (start != 0){
            cout << start;
            if (start+step <= end) cout << " + ";
        }
    }
    cout << endl;
}

void findSum(int start, int end, int step, int sum){
    int temp_sum = 0, c = 0;
    for (; start < end; start += step){
        temp_sum = 0;
        for (int j = start; j < end; j += step){
            temp_sum += j;
            if (temp_sum == sum){
                printResult(start, j, step);
                c++;
            }
        }
    }
    if (c == 0) cout << "Not Possible" << endl;
}

int main(){
    int start, end, step, sum;
    cin >> start >> end >> step >> sum;

    if(start >= end || step < 1){
        cout << "Invalid" << endl;
        return 0;
    }

    findSum(start, end+1, step, sum);
}
