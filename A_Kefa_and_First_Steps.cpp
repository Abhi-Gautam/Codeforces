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

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define scanfd(t) scanf("%d", &t)
#define scanfld(t) scanf("%ld", &t)
#define scanflld(t) scanf("%lld", &t)
#define scanfc(t) scanf("%c", &t)
#define scanfs(t) scanf("%s", t)
#define scanff(t) scanf("%f", &t)
#define scanflf(t) scanf("%lf", &t)
#define memset(a, b) memset(a, (b), sizeof(a))
#define nloop(i, j, k, in) for (int i = j; i < k; i += in)
#define rloop(i, j, k, in) for (int i = j; i >= k; i -= in)
#define nfor(i, j) nloop(i, 0, j, 1)
#define rfor(i, j) rloop(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define p_b push_back
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

int main()
{
    int n;
    cin>>n;
    VI v;
    int x;
    nfor(i, n)
    {
        cin>>x;
        v.p_b(x);
    }
    int dp[n+1];
    memset(dp, 0);
    dp[0] = 0;
    int max = 1;
    nloop(i, 2, n+1, 1)
    {
        if(v[i-2]<=v[i-1])
            dp[i] = dp[i-1]+1;
        if(dp[i] > max)
            max = dp[i];
    }
    // nfor(i, n+1)
    //     cout<<dp[i]<<endl;
    cout<<max+1<<endl;
    return 0;
}