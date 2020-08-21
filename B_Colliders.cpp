#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#define MAXN 100001
using namespace std;

int p[MAXN];
int sta[MAXN];
int s[MAXN];
set<int> op[MAXN];
int main()
{
    int n, m, t;
    char opt[100];
    for (int i = 2; i < MAXN; i++)
        if (!p[i])
        {
            for (int j = 2; j <= (MAXN - 1) / i; j++)
                if (!p[i * j])
                    p[i * j] = i;
            p[i] = i;
        }
    scanf("%d%d", &n, &m);
    for (int tt = 1; tt <= m; tt++)
    {
        int k, q;
        scanf("%s", opt);
        scanf("%d", &q);
        k = q;
        int cnt = 0;
        while (k != 1)
        {
            t = p[k];
            s[++cnt] = t;
            while (k % t == 0)
                k /= t;
        }
        if (opt[0] == '+')
        {
            if (sta[q])
                puts("Already on");
            else
            {
                int flag = 0;
                for (int j = 1; j <= cnt; j++)
                    if (!op[s[j]].empty())
                    {
                        flag = (*op[s[j]].begin());
                        break;
                    }
                if (!flag)
                {
                    puts("Success");
                    sta[q] = 1;
                    for (int j = 1; j <= cnt; j++)
                        op[s[j]].insert(q);
                }
                else
                    printf("Conflict with %d\n", flag);
            }
        }
        else
        {
            if (!sta[q])
                puts("Already off");
            else
            {
                puts("Success");
                sta[q] = 0;
                for (int j = 1; j <= cnt; j++)
                    op[s[j]].erase(q);
            }
        }
    }
    return 0;
}
