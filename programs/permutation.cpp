#include <bits/stdc++.h>
using namespace std;

void permuteHelper(vector<int> a, vector<vector<int>> &ans, int idx){
    if (idx == a.size()){
        ans.push_back(a);
        return;
    }

    for (int i = idx; i < a.size(); i++){
        if (i != idx && a[i] == a[idx])
            continue;
        swap(a[i], a[idx]);
        permuteHelper(a, ans, idx+1);
    }
}

vector<vector<int>> permute(vector<int> a){
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    permuteHelper(a, ans, 0);
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<vector<int>> ans;
    for (auto &i: a){
        cin >> i;
    }

    // way 1
    ans = permute(a);

    // way 2
    // do{
    //     ans.push_back(a);
    // }while(next_permutation(a.begin(), a.end()));

    // print ans
    for (auto j: ans){
        for (auto k: j){
            cout << k << ' ';
        }
        cout << endl;
    }
}
