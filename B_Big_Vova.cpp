#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pil;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define g(x) greater<x>()
#define SPEED ios::sync_with_stdio(false)
const int mod = 1e9 + 7;
const int maxn = 3e5 + 100;
int T, n, k;
int A[maxn];
int vis[maxn];
int res[maxn];
int main()
{
    SPEED;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> A[i];
        sort(A + 1, A + 1 + n, [](int x, int y) { return x > y; });
        int g = A[1];
        for (int i = 1; i <= n; i++)
        {
            int max_g = INT_MIN;
            int p = -1;
            for (int j = 1; j <= n; j++)
            {
                if (A[j] != -1 && __gcd(g, A[j]) > max_g)
                {
                    max_g = __gcd(g, A[j]);
                    p = j;
                }
            }
            res[i] = A[p];
            ;
            g = __gcd(g, A[p]);
            A[p] = -1;
        }
        for (int i = 1; i <= n; i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
