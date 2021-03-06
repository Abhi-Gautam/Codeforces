#include <iostream>
#include <algorithm>
#include <utility>
#include <cstdio>
using namespace std;
int main()
{
    int n, t1, t2, a, b, k;
    pair<int, int> s[1000];
    cin >> n >> t1 >> t2 >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        s[i] = make_pair(-max(a * t1 * (100 - k) + b * t2 * 100, b * t1 * (100 - k) + a * t2 * 100), i + 1);
    }
    sort(s, s + n);
    for (int i = 0; i < n; i++)
        printf("%d %.2lf\n", s[i].second, -0.01 * s[i].first);
}
