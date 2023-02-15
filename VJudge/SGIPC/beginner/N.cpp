#include<iostream>
using namespace std;
#define ll long long

string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // leap year

int get_total_days(string month, int day){
    int d = 0;
    for(int i = 0; month != months[i]; i++)
        d += days[i];
    return d + day;
}

bool isLeap(ll y){
    return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? true : false;
}

ll close_leap(ll y, bool increase){
    for(int i = 0; i<7; i++){
        if(isLeap(y)) return y;
        else if(increase) y++;
        else y--;
    }
    return y;
}

ll leap_count(ll year1, ll year2){
    year1 = close_leap(year1, true);
    if (year1 > year2) return 0;
    year2 = close_leap(year2, false);
    return (year2 / 4) - (year2 / 100) + (year2 / 400) - (year1 / 4) + (year1 / 100) - (year1 / 400)+1;
}

int main(){
    int t, n, day, t_days1, t_days2;
    ll  year1, year2, leap_c;
    string s; char comma;
    cin >> t;
    for (int tt = 1; tt<=t; tt++){
        cout << "Case " << tt << ": ";
        leap_c = 0;

        cin >> s >> day >> comma >> year1;
        t_days1 = get_total_days(s, day);
        cin >> s >> day >> comma >> year2;
        t_days2 = get_total_days(s, day);

        if (year1 == year2){
            if(isLeap(year1) && t_days1 <=60 && t_days2 >=60)
                leap_c = 1;
        }else{
            leap_c = leap_count(year1, year2);
            if (isLeap(year1) && t_days1 > 60) leap_c--;
            if (isLeap(year2) && t_days2 < 60) leap_c--;
        }
        cout << leap_c << "\n";
    }
    return 0;
}