#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template <typename T>
inline T read(T &x)
{
    x = 0;
    int f = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9')
        f |= (ch == '-'), ch = getchar();
    while (ch >= '0' && ch <= '9')
        x = x * 10 + ch - '0', ch = getchar();
    return x = f ? -x : x;
}
const int N = 2e5 + 10;
int n, i, res[N], a[N];
bool vis[N];
int main()
{
    read(n);
    for (i = 2; i <= n; ++i)
        read(a[i]);
    res[1] = 1;
    for (i = 2; i <= n; ++i)
    {
        res[i] = res[i - 1] + a[i];
    }
    int mn = *min_element(res + 1, res + 1 + n);
    if (mn <= 0)
    {
        for (i = 1; i <= n; ++i)
            res[i] += abs(mn) + 1;
    }
    for (i = 1; i <= n; ++i)
    {
        if (res[i] < 1 || res[i] > n || vis[res[i]])
            return puts("-1"), 0;
        vis[res[i]] = 1;
    }
    for (i = 1; i <= n; ++i)
    {
        printf("%d%c", res[i], i == n ? '\n' : ' ');
    }
    return 0;
}