#include <iostream>
using namespace std;

int knapsack(int vl[], int wt[], int n, int W){

    if (n == 0 || W == 0){
        return 0;
    }

    if(wt[n-1] > W){
        return knapsack(vl, wt, n-1, W);
    }

    return max(knapsack(vl, wt, n-1, W-wt[n-1]) + vl[n-1], knapsack(vl, wt, n-1, W));
}

int main()
{   
    int capacity = 20;
    int wt[5] = {5, 9, 3, 6 , 7};
    int vl[5] = {140, 850, 360, 147, 256};

    cout << knapsack(vl, wt, 5, capacity) << endl;
}
