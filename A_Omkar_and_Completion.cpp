#include "bits/stdc++.h"

using namespace std;

typedef unsigned long long ULL;
typedef long long LL;
typedef pair<int, int> pr;
typedef pair<LL, LL> lpr;
typedef pair<double, double> dpr;
typedef pair<long double, long double> ldpr;
typedef double db;
typedef long double ld;
typedef complex<double> cp;
// typedef pair<ld,ld> pt;

#define dbgs(x) #x << " = " << x
#define dbgs2(x, y) dbgs(x) << ", " << dbgs(y)
#define dbgs3(x, y, z) dbgs2(x, y) << ", " << dbgs(z)
#define dbgs4(w, x, y, z) dbgs3(w, x, y) << ", " << dbgs(z)

#define mst(s, x) memset(s, x, sizeof(s))
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define all(x) x.begin(), x.end()
#define unq(x) x.erase(unique(x.begin(), x.end()), x.end())
#define rg register
#define fp(i, a, b) for (rg int i = (a), I = (b) + 1; i < I; ++i)
#define fd(i, a, b) for (rg int i = (a), I = (b)-1; i > I; --i)
#define ub upper_bound
#define lb lower_bound
#define bitcount __builtin_popcount
#define sqr(x) ((x) * (x))

#define go(u) for (rg int i = pre[u], v = e[i].v; i; i = e[i].next, v = e[i].v)
#define gow(u) for (rg LL i = pre[u], v = e[i].v, w = e[i].w; i; i = e[i].next, v = e[i].v, w = e[i].w)
#define EDGE(N, M)            \
    struct edge               \
    {                         \
        int u, v, w, next;    \
    } e[M];                   \
    int pre[N], edge_cnt = 0; \
    void addedge(int u, int v, int w = 0) { edge_cnt = edge_cnt + 1, e[edge_cnt].u = u, e[edge_cnt].v = v, e[edge_cnt].w = w, e[edge_cnt].next = pre[u], pre[u] = edge_cnt; }
#define CLEAR_EDGE(N)                                        \
    {                                                        \
        edge_cnt = 0, memset(pre, 0, sizeof(int) * (N + 1)); \
    }

#define MAXSIZE (1 << 20)
#define isdigit(x) (x >= '0' && x <= '9')

#define MC               \
    int _CASE;           \
    scanf("%d", &_CASE); \
    fp(case_num, 1, _CASE)

const int next_x[8] = {0, 1, -1, 0, 1, 1, -1, -1};
const int next_y[8] = {1, 0, 0, -1, 1, -1, -1, 1};
const int inf = 1e9 + 5; //7;
const LL linf = 1e18;
const double PI = acos(-1.0);

const int MAXN = 2e5 + 5;
const int N = 1e6 + 5;

#define mid ((l + r) / 2)
#define ls ((cnt << 1))
#define rs ((cnt << 1 | 1))

/*----------head----------*/

int n, m, x, y;
int a[MAXN];
int work()
{
    MC
    {
        scanf("%d", &n);
        fp(i, 1, n) printf("%d ", 1);
        printf("\n");
    }
    return 0;
}

// 小数 二分/三分 注意break条件
// 浮点运算 sqrt(a^2-b^2) 可用 sqrt(a+b)*sqrt(a-b) 代替，避免精度问题
// long double -> %Lf 别用C11 (C14/16)
// 控制位数 cout << setprecision(10) << ans;
// reverse vector 注意判空 不然会re
// 分块注意维护块上标记 来更新块内数组a[]
// vector+lower_bound常数 < map/set
// map.find不会创建新元素 map[]会 注意空间
// 别对指针用memset
// 用位运算表示2^n注意加LL  1LL<<20
// 注意递归爆栈
// 注意边界
// 注意memset 多组样例会T

//#define ONLINE_JUDGE

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
#ifdef ONLINE_JUDGE
    //freopen("triatrip.in", "r",stdin );
    //freopen("triatrip.out","w",stdout);
#endif // ONLINE_JUDGE
#ifndef ONLINE_JUDGE
    int size = 512 << 20; // 512MB
    char *p = (char *)malloc(size) + size;
    __asm__("movl %0, %%esp\n" ::"r"(p));
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    // make();
    work();
#ifndef ONLINE_JUDGE
    cout << "time:" << clock() << "ms" << endl;
    freopen("CON", "r", stdin);
    freopen("CON", "w", stdout);
    system("pause");
    fflush(stdout);
#endif
    return 0;
}