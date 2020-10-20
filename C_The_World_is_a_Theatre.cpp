#include <cstdio>
#define LL __int64
#define PF(a) printf("%I64d\n", a);
int n, m, t, i, j;
LL c[31][31];
int main()
{
    c[0][0] = 1;
    for (i = 1; i <= 30; i++)
    {
        c[i][0] = 1;
        for (j = 1; j <= i; j++)
        {
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
        }
    }
    while (~scanf("%d %d %d", &n, &m, &t))
    {
        LL ans = 0;
        for (i = 4; i <= n; i++)
        {
            j = t - i;
            if (j > m || j < 1)
                continue;
            ans += c[n][i] * c[m][j];
        }
        PF(ans);
    }
    return 0;
}
