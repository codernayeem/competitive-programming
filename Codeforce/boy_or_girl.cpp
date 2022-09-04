#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int dis_char_count = 0;

    for (int i = 0; i < name.size(); i++){
        int flag = 0;
        for (int j = i+1; j < name.size(); j++)
        {
            if (name[i] == name[j])
            {
                flag += 1;
                break;
            }
        }
        if (flag == 0)
            dis_char_count++;
    }

    if (dis_char_count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
