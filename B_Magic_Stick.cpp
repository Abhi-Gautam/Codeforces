#include <iostream>
#define ll long long
#define N 100050
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            if (y == 1)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
            continue;
        }
        if (x == 2 || x == 3)
        {
            if (y <= 3)
            {
                cout << "YES\n";
                continue;
            }
            else
                cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}