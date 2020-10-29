#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n, x, pos;

    cin >> n >> x >> pos;

    long long mid;
    long long step_count = 1ll;
    long long lb = 0ll, ub = n;
    long long res = 1ll;
    long long less = 0ll;
    long long more = 0ll;

    while (lb < ub)
    {

        mid = (lb + ub) / 2;

        if (pos < mid)
        { // Need to go left

            // it means that the second condition would've been entered
            ub = mid;
            // i.e. arr[mid] > x
            more++;
        }

        else if (pos > mid)
        { // it means that pos is mid or after mid. lb would be moved.

            lb = mid + 1;
            less++;
        }

        else
        {
            lb = mid + 1;
        }
    }

    step_count = n - 1 - more - less;

    // ans = fact (step_count) * (n - x) * (n - x - 1) * ... (n - x - more + 1) * (x - 1) * (x - 2) * (x - 3) * ... (x - less)

    for (int i = 1; i <= step_count; i++)
    {
        res = ((res % 1000000007) * ((i) % 1000000007)) % 1000000007;
    }

    for (int i = 1; i <= more; i++)
    {
        res = ((res % 1000000007) * ((n - x - i + 1) % 1000000007)) % 1000000007;
    }

    for (int i = 1; i <= less; i++)
    {
        res = ((res % 1000000007) * ((x - i) % 1000000007)) % 1000000007;
    }

    cout << res << "\n";
}