#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <ctime>
#define LL long long
using namespace std;
const int N = 100001;
int n, a[N], ans = 1, cnt;
int read()
{
    int d = 0, f = 1;
    char c = getchar();
    while (c < '0' || c > '9')
    {
        if (c == '-')
            f = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
        d = (d << 3) + (d << 1) + c - 48, c = getchar();
    return d * f;
}
int main()
{
    n = read();
    int x;
    for (int i = 1; i <= n; i++)
        x = read(), a[x]++;
    for (int i = 2; i < N; i++)
    {
        cnt = 0;
        for (int j = i; j < N; j += i)
            cnt += a[j];
        ans = max(ans, cnt);
    }
    printf("%d", ans);
    return 0;
}
