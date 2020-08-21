#include <bits/stdc++.h>
#define qtr                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define int long long
using namespace std;

int32_t main()
{
    qtr int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'R')
                a++;
            if (str[i] == 'P')
                b++;
            if (str[i] == 'S')
                c++;
        }
        if (a >= b && a >= c)
        {
            cout << string(str.length(), 'P') << endl;
        }
        else if (b >= c && b >= a)
        {
            cout << string(str.length(), 'S') << endl;
        }
        else if (c >= a && c >= b)
        {
            cout << string(str.length(), 'R') << endl;
        }
    }
}