#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <vector>
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = a; i > (b); --i)
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        int n;
        cin >> n;
        int i = n / 2;
        if (n % 2 == 0)
        {
            cout << i << " " << i << endl;
            flag = true;
        }
        else
        {
            for (i = 3; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    cout << n / i << " " << n / i * (i - 1) << endl;
                    flag = true;
                    break;
                }
            }
        }
        if (flag == false)
        {
            cout << 1 << " " << n - 1 << endl;
        }
    }
}