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
#define in(n) \
    int n;\
        cin>>n;
#define inl(n) \
    long long int n;\
        cin>>n;
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

// int main()
// {
//     fast
//     test
//     {
//         int64 n;
//         cin>>n;
//         vector<pair<int, long long int>> v;

//         for(long long int i = 2; i*i <= n; ++i)
//         {
//             int cnt = 0;
//             while(n%i == 0)
//             {
//                 ++cnt;
//                 n /= i;
//             }
//             if(cnt > 0) v.PB({cnt, i});
//         }
//         if(n > 1) v.PB({1, n});

//         for(auto i : v) cout<<i.first<<" ";
//         cout<<endl;
//     }
//     return 0;
// }


int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<pair<int, long long>> val;
        for (long long i = 2; i * i <= n; ++i)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            if (cnt > 0)
            {
                val.push_back({cnt, i});
            }
        }
        if (n > 1)
        {
            val.push_back({1, n});
        }
        
        sort(val.rbegin(), val.rend());

        vector<long long> ans(val[0].first, val[0].second);
        for (int i = 1; i < int(val.size()); ++i)
        {
            for (int j = 0; j < val[i].first; ++j)
            {
                ans.back() *= val[i].second;
            }
        }

        cout << ans.size() << endl;
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}