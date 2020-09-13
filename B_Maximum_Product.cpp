#include <algorithm>
#include <iostream>
using namespace std;
namespace fio
{
    streambuf *in = cin.rdbuf();
    char bb[1000000], *s = bb, *t = bb;
#define gc() \
    (s == t && (t = (s = bb) + in->sgetn(bb, 1000000), s == t) ? EOF : *s++)
    inline int read()
    {
        int x = 0, w = 1;
        char ch = gc();
        while (ch < 48)
            w = ch == '-' ? -1 : 1, ch = gc();
        while (ch >= 48)
            x = x * 10 + ch - 48, ch = gc();
        return x * w;
    }
} // namespace fio
using fio::read;
int n, m;
int arr[100005];
int main()
{
    int t = read();
    while (t--)
    {
        n = read();
        long long ans = -1e18;
        for (int i = 1; i <= n; i++)
            arr[i] = read();
        sort(arr + 1, arr + n + 1);
        for (int i = 0; i <= 5; i++)
        {
            long long tmp = 1;
            for (int u = 1; u <= i; u++)
                tmp *= arr[u];
            for (int u = n - 4 + i; u <= n; u++)
                tmp *= arr[u];
            ans = max(ans, tmp);
        }
        cout << ans << endl;
    }
}
