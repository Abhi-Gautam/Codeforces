#include <iostream>
#include <cmath>
using namespace std;
int greatest_num(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }

    else if (b >= a && b >= c)
    {
        return b;
    }

    else if (c >= a && c >= b)
    {
        return c;
    }
    return 0;
}

int main()
{
    int k;
    cin >> k;
    int result;
    int sum = 3*pow(k,2) - 3*k + 1;
    for (int i = 2; i <= k; i++)
    {
        for (int j = 2; j <= k; j++)
        {
            for (int l = 2; l <= k; l++)
            {
                for (result = greatest_num(i, j,l); result >= 1; result--)
                {
                    if (i % result == 0 && j % result == 0 && l % result == 0)
                    {
                        sum += result;
                        break;
                    }
                }
            }
        }
    }
    cout << sum;
    return 0;
}