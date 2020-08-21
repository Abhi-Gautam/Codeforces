#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(n + 1);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            ++cnt[x];
        }
        int mx = *max_element(cnt.begin(), cnt.end());
        //cout<<mx<<" ";
        int diff = n + 1 - count(cnt.begin(), cnt.end(), 0);
        //cout<<diff<<endl;
        cout << max(min(mx - 1, diff), min(mx, diff - 1)) << endl;
    }

    return 0;
}