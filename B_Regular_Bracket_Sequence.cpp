#include <stdio.h>
#include <string.h>

char c[1000010];

void solve()
{
    int top, ans, i, len;
    len = strlen(c);
    ans = 0;
    top = 0;
    for (i = 0; i < len; i++)
    {
        if (c[i] == '(')
        {
            top++;
        }
        else
        {
            if (top > 0)
            {
                ans += 2;
                top--;
            }
        }
    }
    printf("%d\n", ans);
}

int main()
{
    while (scanf("%s", c) == 1)
    {
        solve();
    }
    return 0;
}