#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

template <class T>
T sqr(T x) { return x * x; }

const int INF = 1000 * 1000 * 1000;
const long long INF64 = sqr(static_cast<long long>(INF));
const double PI = acos(-1.0);

int n, m, ans;
vector<int> g[300];
bool used[300];

void dfs(int u)
{
    used[u] = true;
    for (int i = 0; i < (int)g[u].size(); ++i)
    {
        int v = g[u][i];
        if (used[v])
            continue;
        dfs(v);
    }
}

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n >> m;
    bool flag = false;
    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; ++j)
        {
            flag = true;
            int u;
            cin >> u;
            u += n - 1;
            g[i].push_back(u);
            g[u].push_back(i);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (used[i])
            continue;
        ++ans;
        dfs(i);
    }
    if (flag)
        --ans;
    cout << ans << endl;
    return 0;
}