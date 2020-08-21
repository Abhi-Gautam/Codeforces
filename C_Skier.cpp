#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
const int mod = 1e9 + 7;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
int main()
{
    fast;
    int x;
    cin >> x;
    while (x--)
    {
        string s;
        cin >> s;
        set<pair<pair<int, int>, pair<int, int>>> cnt;
        pair<int, int> pas = {0, 0}, pre;
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            pre = pas;
            if (s[i] == 'N')
            {
                pre.first++;
            }
            else if (s[i] == 'S')
            {
                pre.first--;
            }
            else if (s[i] == 'W')
            {
                pre.second--;
            }
            else
            {
                pre.second++;
            }
            if (cnt.count({pre, pas}) || cnt.count({pas, pre}))
            {
                ans++;
            }
            else
            {
                ans += 5;
                cnt.insert({pre, pas});
            }
            pas = pre;
        }
        cout << ans << "\n";
    }
}