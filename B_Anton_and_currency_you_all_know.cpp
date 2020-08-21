#include <bits/stdc++.h>
#define rep(start, i, end) for (i = start; i <= end; ++i)
#define inf ~(1 << 31)
typedef long long ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string s, ans;
    cin >> s;
    ans = "";
    int i, len = s.length();
    int ok = 0;
    rep(0, i, len - 2)
    {
        if (!((s[i] - '0') & 1))
            ok = 1;
    }
    if (!ok)
        puts("-1");
    else
    {
        char c = s[len - 1];
        int tmp = -1, ok = 0;
        ans = s;
        rep(0, i, len - 2)
        {
            if (!((ans[i] - '0') & 1))
            {
                if (ans[i] < ans[len - 1])
                {
                    ok = 1;
                    swap(ans[i], ans[len - 1]);
                    break;
                }
                tmp = i;
            }
        }
        if (!ok)
            swap(ans[tmp], ans[len - 1]);
        cout << ans << endl;
    }
    return 0;
}
