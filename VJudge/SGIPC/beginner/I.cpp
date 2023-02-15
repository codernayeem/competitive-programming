#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    long long n, max_, min_, line, mid;
    cin >> t;
    for (int tt = 1; tt<=t; tt++){
        cout << "Case " << tt << ": ";
        cin >> n;

        line = sqrt(n);

        if (line * line != n) line++;
        max_ = line*line;
        min_ = (line-1) * (line - 1);

        mid = (min_+max_+1) / 2;
        if (n == mid) cout << line << " " << line << "\n";
        else if(n < mid){
            if(line%2) cout << line << " " << n-min_ << "\n";
            else cout << n-min_ << " " << line << "\n";
        }else{
            if(line%2 == 0) cout << line << " " << max_-n+1 << "\n";
            else cout << max_-n+1 << " " << line << "\n";
        }
    }
    return 0;
}