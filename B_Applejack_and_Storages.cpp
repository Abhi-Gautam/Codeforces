#include<bits/stdc++.h>

using namespace std;

int const MAXN = 1e5 + 5;
int cnt[MAXN];

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, q, x, cnt2 = 0, cnt4 = 0;
    char type;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> x;
        
        cnt2 -= cnt[x] / 2;
        cnt4 -= cnt[x] / 4;
        cnt[x]++;
        cnt2 += cnt[x] / 2;
        cnt4 += cnt[x] / 4;
    }

    cin >> q;

    for (int i = 1; i <= q; ++i) {
        cin >> type >> x;
        cnt2 -= cnt[x] / 2;
        cnt4 -= cnt[x] / 4;
        
        if (type == '+') cnt[x]++;
        else cnt[x]--;
        
        cnt2 += cnt[x] / 2;
        cnt4 += cnt[x] / 4;
        
        if (cnt4 >= 1 && cnt2 >= 4) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}