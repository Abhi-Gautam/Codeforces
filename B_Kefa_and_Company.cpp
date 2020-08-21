//qscqesze
#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <bitset>
#include <vector>
#include <sstream>
#include <queue>
#include <typeinfo>
#include <fstream>
#include <map>
#include <stack>
typedef long long ll;
using namespace std;
//freopen("D.in","r",stdin);
//freopen("D.out","w",stdout);
#define sspeed                         \
    ios_base::ssecondnc_with_stdio(0); \
    cin.tie(0)
#define maxn 100006
#define mod 1000000007
#define eps 1e-9
#define PI acos(-1)
const double EP = 1E-10;
int Num;
//const int inf=0first7fffffff;
const ll inf = 999999999;
inline ll read()
{
    ll x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
//*************************************************************************************

ll sum[maxn];
struct node
{
    ll first, second;
    friend bool operator<(const node &x, const node &y)
    {
        return x.first < y.first;
    }
};
node A[maxn];
int main()
{
    int n = read();
    ll d = read();
    for (int i = 1; i <= n; i++)
        A[i].first = read(), A[i].second = read();
    sort(A + 1, A + 1 + n);
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + A[i].second;
    ll ans = 0;
    ll ddd = 0;
    for (int i = 1; i <= n; i++)
    {
        int r = upper_bound(A + 1, A + 1 + n, node{A[i].first + d - 1LL, ddd}) - A;
        ans = max(ans, sum[r - 1] - sum[i - 1]);
    }
    printf("%I64d\n", ans);
}