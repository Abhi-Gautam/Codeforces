#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, a;
        cin >> n >> x;
        int sum = 0, l = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum = sum + a;
            if (sum % x)
                l = max(l, max(i + 1, n - (i + 1)));
        }
        cout << l << endl;
    }
}
