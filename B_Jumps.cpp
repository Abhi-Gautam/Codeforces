//  //
#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define f first
#define s second
#define what_is(x) cerr << #x << " is " << x << endl;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

const int INF = 1000000007;
const ll MOD = 1000000007;

void solve_test()
{
    int x;
    cin >> x;
    int i = 0;
    for (; i * (i + 1) < 2 * x; i++)
        ;
    int diff = i * (i + 1) / 2 - x;
    if (diff == 1)
    {
        i++;
    }
    cout << i << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tests;
    //tests = 1;
    cin >> tests;
    while (tests--)
    {
        solve_test();
    }
    return 0;
}
