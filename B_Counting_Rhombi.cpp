#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <limits>
#include <string>
#include <iostream>
#include <sstream>
#include <functional>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;

#define ALL(c) (c).begin(), (c).end()
#define CNT(c, x) ((c).find(x) != (c).end())
#define FOR(i, a, n) for (int i = (a); i < (n); i++)
#define FOR1(i, a, n) for (int i = (a); i <= (n); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP1(i, n) for (int i = 0; i <= (n); i++)
#define DBG(VAR) cerr << #VAR << " = " << (VAR) << endl;
#define CLR(x, v) memset(x, v, sizeof(x))
#define SZ(x) ((int)(x).size())
#define MP(x, y) make_pair((x), (y))
#define MP3(x, y, z) MP((x), MP((y), (z)))
#define MP4(x1, y1, x2, y2) MP(MP(x1, y1), MP(x2, y2))
#define pb push_back
typedef long long ll;
typedef pair<int, int> PII;
template <class T>
bool checkMin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool checkMax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
//int dx[]={-1,0,1,0},  dy[]={0,1,0,-1};
//int dx[]={-1,-1,0,1,1,1,0,-1}, dy[]={0,1,1,1,0,-1,-1,-1};
const int INF = 1e9;
const int MN = -1;

int main()
{
#ifdef LOCAL
    freopen("b.in", "r", stdin);
#endif
    int w, h;
    ll ways = 0;
    scanf("%d %d", &w, &h);
    for (int width = 2; width <= w; width += 2)
    {
        for (int height = 2; height <= h; height += 2)
        {
            ways += (w - width + 1) * (h - height + 1);
        }
    }
    cout << ways << endl;
}
