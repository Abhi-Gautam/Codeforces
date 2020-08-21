#include <bits/stdc++.h>

using namespace std;
int ans;
// Function to find intersection
int intersection(vector<int> a, vector<int> b, int n, int m)
{
    int i = 0, j = 0;
    int ans = -1;
    while (i < n && j < m)
    {

        if (a[i] > b[j])
        {
            j++;
        }

        else if (b[j] > a[i])
        {
            i++;
        }
        else
        {
            ans = a[i];
            return ans;
            i++;
            j++;
        }
    }
    return -1;
}

// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<int> a(n), b(m);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<m; i++) cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = intersection(a, b, n, m);
        if(ans!=-1)
        {
            cout<<"YES"<<endl;
            cout<<"1 "<<ans<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }  
    return 0;
}