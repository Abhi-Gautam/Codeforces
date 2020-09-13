#include <bits/stdc++.h>

using namespace std;
// #define int long long
mt19937 rnd(time(0));
typedef long long ll;
typedef long double ld;

// #define _GLIBCXX_DEBUG
#define f first
#define s second
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define int ll
//
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    bool ok = 1;
    for (int i = 0; i < 110; ++i)
    {
        if(mp[i] == 1) ok = 0;
        if(ok && mp[i] >= 2) ans+=2;
        else if(!ok && mp[i] >= 1) ans+=1;
        else if(mp[i] == 0) break;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}