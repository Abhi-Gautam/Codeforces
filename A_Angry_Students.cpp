#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <iomanip>
#include <bitset>
#include <stack>
#include <memory.h>
#include <list>
#include <numeric>
#include <functional>
#include <complex>

#define ll long long
#define ld long double
#define ull unsigned ll
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen("dictionary.in", "r", stdin);
    //freopen("dictionary.out", "w", stdout);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.precision(20);
    cout.setf(ios::fixed);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> a(n);
        int last = -1;
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 'P')
            {
                cnt++;
                if (last != -1)
                {
                    ans = max(ans, cnt);
                }
            }
            else
            {
                cnt = 0;
                last = i;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}