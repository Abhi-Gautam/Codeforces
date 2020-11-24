#include <bits/stdc++.h>
#pragma GCC optimize("O2")
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(c) c.begin(), c.end()
#define endl "\n"
#define sz(u) (int)(u.size())
#define L(x) (2 * x)
#define R(x) (2 * x + 1)
#define M(x, y) ((x + y) / 2)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> t;
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            if (a < 0)
                cnt++, a *= -1;
            sum += a;
            t.PB(a);
        }
    sort(all(t));
    if (cnt % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        cout << sum - +2 * t[0];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}