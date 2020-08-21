#include <cstdio>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < k; ++i)
    {
        printf("%d ", n - i);
    }
    printf("1");
    for (int i = 2; i <= n - k; ++i)
    {
        printf(" %d", i);
    }
    printf("\n");

    return 0;
}