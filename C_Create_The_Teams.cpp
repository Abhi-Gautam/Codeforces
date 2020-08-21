#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        int c = 0, z = 0, q = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] * (z + 1) >= x)
            {
                q++;
                //c = 0;
                z = 0;
            }
            else
            {
                z++;
            }
        }
        cout << q << endl;
    }
    return 0;
}
