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

int main()
{
    fast
    test
    {
        int n;
        cin>>n;

        int ans = 0;
        string a[n];
        rep(i, n)
        {
            cin>>a[i];
        }
        if(a[n-1][n-2] == '1' && a[n-2][n-1] == '1')
        {
            ans = (a[0][1] - '0')+ (a[1][0] - '0');
            cout<<ans<<endl;
            if(a[0][1] == '1') cout<<"1 2"<<endl;
            if(a[1][0] == '1') cout<<"2 1"<<endl; 

        }
        else if(a[n-1][n-2] == '0' && a[n-2][n-1] == '0')
        {
            
            ans = 2 - ((a[0][1] - '0')+ (a[1][0] - '0'));
            cout << ans << endl;
            if(a[0][1] == '0') cout<<"1 2"<<endl;
            if(a[1][0] == '0') cout<<"2 1"<<endl;
        }
        else if (a[0][1] == '1' && a[1][0] == '1'){

            ans = (a[n-1][n-2] - '0') + (a[n-2][n-1] - '0');
            cout<<ans<<endl;
            if(a[n-1][n-2] == '1') cout<<n<<" "<<n-1<<endl;
            if(a[n-2][n-1] == '1') cout<<n-1<<" "<<n<<endl;

        }
        else if (a[0][1] == '0' && a[1][0] == '0'){
            ans = 2 - ((a[n - 1][n - 2] - '0') + (a[n - 2][n - 1] - '0'));
            cout << ans << endl;
            if(a[n-1][n-2] == '0') cout<<n<<" "<<n-1<<endl;
            if(a[n-2][n-1] == '0') cout<<n-1<<" "<<n<<endl;
        }
        else
        {
            cout<<"2"<<endl;
            cout<<"1 2"<<endl;
            if(a[0][1] != a[n-2][n-1]) cout<<n-1<<" "<<n<<endl;
            else cout<<n<<" "<<n-1<<endl;
        }
    }
    return 0;
}