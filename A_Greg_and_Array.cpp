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


struct query
{
    int start, end;

    int64 weight;
};

void add(int arr[], int N, int lo, int hi, int val)
{
    arr[lo] += val;
    if (hi != N - 1)
        arr[hi + 1] -= val;
}

//  Utility method to get actual array from operation array
void updateArray(int arr[], int N)
{
    //  convert array into prefix sum array
    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];
}

// function to increment values in the given range
// by a value d for multiple queries
void addbyd(int64 arr[], struct query q_arr[],
                  int n, int m)
{
    int64 sum[n];
    memset(sum, 0, sizeof(sum));

    // for each (start, end) index pair perform the
    // following operations on 'sum[]'
    for (int i = 0; i < m; i++)
    {

        // increment the value at index 'start' by
        // the given value 'd' in 'sum[]'
        sum[q_arr[i].start] += q_arr[i].weight;

        // if the index '(end+1)' exists then decrement
        // the value at index '(end+1)' by the given
        // value 'd' in 'sum[]'
        if ((q_arr[i].end + 1) < n)
            sum[q_arr[i].end + 1] -= q_arr[i].weight;
    }

    // Now, perform the following operations:
    // accumulate values in the 'sum[]' array and
    // then add them to the corresponding indexes
    // in 'arr[]'
    arr[0] += sum[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] += sum[i - 1];
        arr[i] += sum[i];
    }
}


int main()
{
    fast
    int n, m, k;
    in3(n, m, k)
    int64 v[n], operations[m][3];
    rep(i, n) cin>>v[i];

    struct query qm[m];
    rep(i, m)
    {
        int a, b, c;
        in3(a, b, c)
        qm[i].start = a-1;
        qm[i].end = b-1;
        qm[i].weight = c;
    }
    struct query qk[k];
    rep(i, k)
    {
        int a, b;
        in2(a, b)
        qk[i].start = a-1;
        qk[i].end = b-1;
        qk[i].weight = 1;
    }
    int64 wt[m];
    rep(i, m) wt[i] = 0;
    addbyd(wt, qk, m, k);
    // rep(i, m) cout << wt[i] << " ";
    // cout<<endl;
    rep(i, m)
    {
        qm[i].weight *= wt[i];
    }
    addbyd(v, qm, n, m);
    rep(i, n) cout<<v[i]<<" ";
    return 0;
}