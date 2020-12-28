#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
typedef unsigned long long ull;
int T, tp;
ull n, ans;
int dig[1005], la[1005];

inline void digitise(ull k)
{
    // whether k is fair
    ull p = k;
    while (p != 0)
    {
        la[++tp] = p % 10;
        p /= 10;
    }
    for (int i = 1; i <= tp; ++i)
        dig[i] = la[tp - i + 1];
}

inline ull form_number(int nm_dig_equal)
{
    ull sm = 0;
    for (int i = 1; i <= tp; ++i)
    {
        sm *= 10;
        if (i <= nm_dig_equal)
            sm += dig[i];
    }
    return sm;
}

inline bool judge(ull k)
{
    ull p = k;
    while (p)
    {
        int d = p % 10;
        p /= 10;
        if (d == 0)
            continue;
        if (k % d != 0)
            return false;
    }
    return true;
}

int gcd(int p, int q)
{
    if (p == 0)
        return q;
    if (q == 0)
        return p;
    return gcd(q, p % q);
}

int lcm(int p, int q)
{
    return p * q / gcd(p, q);
}

// enumerate number of digits equal
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        tp = 0;
        ans = -1;
        digitise(n);
        if (judge(n))
        {
            cout << n << endl;
            continue;
        }
        for (int nm_dig_equal = tp - 1; nm_dig_equal > 0; --nm_dig_equal)
        {
            int lm = 1;
            for (int i = 1; i <= nm_dig_equal; ++i)
            {
                if (dig[i] == 0)
                    continue;
                lm = lcm(lm, dig[i]);
            }
            ull tmp = form_number(nm_dig_equal);
            ull origin_last_nm = n - tmp;
            ull md = tmp % lm;
            ull last_nm = lm - md;
            while (last_nm < origin_last_nm)
            {
                last_nm += lm;
            }
            while (!judge(tmp + last_nm))
            {
                //cout<<last_nm<<endl;
                last_nm += lm;
            }
            if (((int)log10(last_nm) + 1) > tp - nm_dig_equal)
                continue;
            ///cout<<nm_dig_equal<<" "<<tmp<<" "<<lm<<" "<<md<<endl;
            ans = tmp + last_nm;
            break;
        }
        if (ans != -1)
        {
            cout << ans << endl;
            continue;
        }
        if (dig[1] == 9)
        {
            putchar('1');
            for (int i = 1; i <= tp; ++i)
                putchar('0');
            puts("");
        }
        else
        {
            cout << dig[1] + 1;
            for (int i = 1; i < tp; ++i)
                putchar('0');
            puts("");
        }
    }
}