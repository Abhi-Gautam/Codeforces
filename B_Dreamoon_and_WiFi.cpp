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
#include <iomanip>
using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
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
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
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

long long int fact(int n)
{
    if(n == 0) return 1;
    return n*fact(n-1);
}

int main()
{
    fast
    string a, b;
    cin>>a>>b;
    int suma = 0;
    int sumb = 0;
    int c = 0; 
    double p = 1.000000000000;
    rep(i, a.length())
    {
        if(a[i] == '+')
            suma++;
        if(a[i] == '-')
            suma--;
        if(b[i] == '+')
            sumb++;
        if(b[i] == '-')
            sumb--;
        if(b[i] == '?')
            c++;
    }
    if(suma == sumb && c == 0)
        cout <<fixed << setprecision(12) << p;
    else if(suma == sumb && c != 0)
    {
        cout<< fixed <<setprecision(12)<<p*(fact(c)/fact(c/2))/pow(2,c);
    }
    else
    {
        int cp = sumb-suma+c;
        cp = max(cp, c-cp);
        cout <<fixed <<setprecision(12)<< p*(fact(c) / fact(cp)) / pow(2, c);
    }
    return 0;
}