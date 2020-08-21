#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
template <class Read>
void in(Read &x)
{
    x = 0;
    int f = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        f |= (ch == '-');
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    x = f ? -x : x;
    return;
}
int t, n, a[1000005];
int main()
{
    in(t);
    while (t--)
    {
        in(n);
        for (int i = 1; i <= n; i++)
            in(a[i]);
        int x = 0, y = n + 1;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] >= i - 1)
                x = i;
            else
                break;
        }
        for (int i = n; i >= 1; i--)
        {
            if (a[i] >= n - i)
                y = i;
            else
                break;
        }
        if (x >= y)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
