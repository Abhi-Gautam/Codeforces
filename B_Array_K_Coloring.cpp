#include <iostream>
#include <set>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <unordered_map>

#define SZ(v) ((int)v.size())
#define fst first
#define snd second
#define mp make_pair
#define pb push_back
#define forr(i, x, n) for (int i = (x); i < int(n); i++)
#define forn(i, n) forr(i, 0, n)

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll MAXN = 2 * 1e5 + 5;
const ll INF = 1e15 + 5;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("in.txt", "r", stdin);

    int N, K;
    cin >> N >> K;
    vector<pii> V(N);
    vector<int> C(N, 0);
    map<int, int> M;
    forn(i, N)
    {
        cin >> V[i].fst;
        V[i].snd = i;
    }
    sort(V.begin(), V.end());
    int c = 0;
    forn(i, N) M[V[i].fst]++;
    for (auto &e : M)
        if (e.snd > K)
        {
            cout << "NO\n";
            return 0;
        }
    forn(i, N) C[V[i].snd] = c % K + 1, c++;
    if (*max_element(C.begin(), C.end()) < K)
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    forn(i, N) cout << C[i] << ' ';

    return 0;
}
