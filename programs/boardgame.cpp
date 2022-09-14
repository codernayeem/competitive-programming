#include <bits/stdc++.h>
using namespace std;

int countPath(int s, int e){
    if(s == e){
        return 1;
    }else if(s > e){
        return 0;
    }

    int c = 0;
    for (int i = 1; i <= 6; i++){
        c += countPath(s+i, e);
    }
    return c;
}

int countPathWays(int s, int e, string way){
    if(s == e){
        cout << way << endl;
        return 1;
    }else if(s > e){
        return 0;
    }

    int c = 0;
    for (int i = 1; i <= 6; i++){
        c += countPathWays(s+i, e, way + to_string(i) + " ");
    }
    return c;
}

int main()
{
    int s = 0;
    int e = 6;

    // cout << "Ways to go from " << s << " to " << e << " are => " << countPath(s, e) << endl;
    int c = countPathWays(s, e, "");
    cout << "Ways to go from " << s << " to " << e << " are => " << c << endl;
}
