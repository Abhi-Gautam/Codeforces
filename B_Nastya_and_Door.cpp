#include "iostream"
#include "algorithm"
#include "stdio.h"
#include "string.h"
using namespace std;
const int N = 1e6 + 10;
int a[N], p[N], c, s[N];
inline int read()
{
    int s = 0, w = 1;
    char c = getchar();
    while (c > '9' || c < '0')
    {
        if (c == '-')
            w = -w;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        s = s * 10 + (c ^ '0');
        c = getchar();
    }
    return s * w;
}
int main()
{
    int t = read();
    while (t--)
    {
        int n = read(), k = read();
        for (int i = 1; i <= n; i++)
            a[i] = read();
        for (int i = 2; i < n; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                p[i] = p[i - 1] + 1;
            }
            else
                p[i] = p[i - 1];
        }
        int m = 0, ans = 1;
        for (int i = 1; i <= n - k + 1; i++)
        {
            int x = p[i + k - 2] - p[i];
            if (m < x)
            {
                m = x;
                ans = i;
            }
        }
        printf("%d %d\n", m + 1, ans);
    }
    return 0;
}