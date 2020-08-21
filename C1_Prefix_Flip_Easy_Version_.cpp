#include <bits/stdc++.h>
#define LL long long
#define INF 0x3f3f3f3f

using namespace std;
const int maxn = 1e5 + 5;

char a[maxn], b[maxn];

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        scanf("%s", a);
        scanf("%s", b);
        vector<int> ans;
        ans.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                if (a[0] == b[i])
                {
                    ans.push_back(1);
                    a[0] = 1 - (a[0] - '0') + '0';
                }
                ans.push_back(i + 1);
                for (int j = 0; j <= i; j++)
                {
                    a[j] = 1 - (a[j] - '0') + '0';
                    //cout<<a[i];
                }
                reverse(a, a + i + 1);
                //  for(int j = 0; j<=i ;j++){
                //      swap(a[j],a[i-j]);
                //  }
                //cout<<a<<"**"<<endl;
            }
        }
        printf("%d", ans.size());
        for (int i = 0; i < ans.size(); i++)
        {
            printf(" %d", ans[i]);
        }
        printf("\n");
    }
}