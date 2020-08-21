#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <climits>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define in1(n) cin>>n;
#define in2(n, k) cin>>n>>k;
#define in3(n, k, s) cin>>n>>k>>s;
#define scn(t) scanf("%d", &t)
#define scnld(t) scanf("%ld", &t)
#define scnlld(t) scanf("%lld", &t)
#define scnc(t) scanf("%c", &t)
#define scns(t) scanf("%s", t)
#define scnf(t) scanf("%f", &t)
#define scnlf(t) scanf("%lf", &t)
#define mem(a, b) memset(a, (b), sizeof(a))
#define nloop(i, j, k, in) for (int i = j; i < k; i += in)
#define rloop(i, j, k, in) for (int i = j; i >= k; i -= in)
#define rep(i, j) nloop(i, 0, j, 1)
#define rrep(i, j) rloop(i, j, 0, 1)
#define inar(n, a) \
    rep(i, n)\
        cin>>a[i];
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)\
{\
return (a.second < b.second);\
}
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define fast  \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

long long pow(long long n)
{
    if (n == 0)
        return 1;
    long long temp = pow(n / 2);
    return (temp * temp * (n % 2 + 1)) % MOD;
}

int main()
{
    // DP way where memory exceed
    // int64 up[n+1], down[n+1];
    // rep(i, n+1) up[i] = 0, down[i] = 0;
    // up[0] = 1;
    // down[0] = 0;
    // nloop(i, 1, n+1, 1)
    // {
    //     up[i] = ((up[i-1]*3)%MOD + (down[i-1])%MOD)%MOD;
    //     down[i] = ((down[i-1]*3)%MOD + up[i-1]%MOD)%MOD;
    // }
    // 
    // cout<<up[n]%MOD<<endl;
    // int64 nextup = 1, nextdown = 0, temp;
    // rep(i, n)
    // {
    //     temp = nextup;
    //     nextup = (nextup*3)%MOD + nextdown%MOD;
    //     nextdown = (nextdown*3)%MOD + temp%MOD;
    // }
    // cout<<nextup%MOD<<endl;
    long long n;
    scanf("%I64d", &n);
    if (n == 0)
        printf("1");
    else
        printf("%I64d", pow(n - 1) * (pow(n) + 1) % MOD);
    return 0;
}