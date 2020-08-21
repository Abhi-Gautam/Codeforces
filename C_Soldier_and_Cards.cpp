
#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define mp make_pair
#define pb push_back

using namespace std;

typedef struct pair<int, int> PII;

int main()
{
    map<vector<int>, int> s1;
    map<vector<int>, int> s2;
    vector<int> d[2];
    long long int ans = 0;
    int n, win = 0;
    cin >> n;
    for (int i = 0; i < 2; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int tmp;
            cin >> tmp;
            d[i].pb(tmp);
        }
    }
    while (!s1[d[0]] || !s2[d[1]])
    {
        int t1, t2;
        s1[d[0]] = 1;
        s2[d[1]] = 1;
        ans++;
        t1 = d[0][0];
        t2 = d[1][0];
        d[0].erase(d[0].begin() + 0);
        d[1].erase(d[1].begin() + 0);

        if (t1 > t2)
        {
            d[0].pb(t2);
            d[0].pb(t1);
        }
        else
        {
            d[1].pb(t1);
            d[1].pb(t2);
        }
        if (d[0].size() == 0)
        {
            win = 2;
            break;
        }
        if (d[1].size() == 0)
        {
            win = 1;
            break;
        }
    }
    if (win)
        cout << ans << " " << win;
    else
        cout << -1;
    return 0;
}