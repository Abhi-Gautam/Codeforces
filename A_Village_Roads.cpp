#include <bits/stdc++.h>
using namespace std;

struct node
{
    pair<long long int  , long long int  > val;
    long long int   level;
};

long long int   minOperations(long long int   x1, long long int   y1, long long int   x2, long long int   y2)
{

    set<pair<long long int  , long long int  >> visit;

    queue<node> q;
    node n = {make_pair(x1, y1), 0};
    q.push(n);

    while (!q.empty())
    {

        node t = q.front();
        q.pop();

        // cout<<t.val.first<<" "<<t.val.second<<endl;

        if (t.val.first == x2 && t.val.second == y2)
            return t.level;

        visit.insert(make_pair(t.val.first, t.val.second));

        if (t.val.first + 2 * t.val.second == x2 && t.val.second == y2)
            return t.level + 1;

        if (t.val.first - 2 * t.val.second == x2 && t.val.second == y2)
            return t.level + 1;

        if ((t.val.second + 2 * t.val.first) > 0 && (t.val.first == x2 && t.val.second + 2 * t.val.first == y2))
            return t.level + 1;

        if ((t.val.second + 2 * t.val.first) < 0 && (t.val.first == -1*x2 && (t.val.second + 2 * t.val.first) == -1*y2))
            return t.level + 1;

        if ((t.val.second - 2 * t.val.first) > 0 && (t.val.first == x2 && t.val.second - 2 * t.val.first == y2))
            return t.level + 1;

        if ((t.val.second - 2 * t.val.first) < 0 && (t.val.first == -1*x2 && (t.val.second - 2 * t.val.first) == -1*y2))
            return t.level + 1;

        if (visit.find(make_pair(t.val.first + 2 * t.val.second, t.val.second)) == visit.end())
        {
            n.val.first = t.val.first + 2 * t.val.second;
            n.val.second = t.val.second;
            n.level = t.level + 1;
            q.push(n);
        }

        if (visit.find(make_pair(t.val.first - 2 * t.val.second, t.val.second)) == visit.end())
        {
            n.val.first = t.val.first - 2 * t.val.second;
            n.val.second = t.val.second;
            n.level = t.level + 1;
            q.push(n);
        }

        if ((t.val.second + 2 * t.val.first) > 0 && visit.find(make_pair(t.val.first, t.val.second + 2 * t.val.first)) == visit.end())
        {
            n.val.second = 2 * t.val.first + t.val.second;
            n.val.first = t.val.first;
            n.level = t.level + 1;
            q.push(n);
        }

        if ((t.val.second + 2 * t.val.first) < 0 && visit.find(make_pair(-1 * t.val.first, -1 * t.val.second - 2 * t.val.first)) == visit.end())
        {
            n.val.second = -2 * t.val.first - t.val.second;
            n.val.first = -1 * t.val.first;
            n.level = t.level + 1;
            q.push(n);
        }

        if ((t.val.second - 2 * t.val.first) > 0 && visit.find(make_pair(t.val.first, t.val.second - 2 * t.val.first)) == visit.end())
        {
            n.val.second = -2 * t.val.first + t.val.second;
            n.val.first = t.val.first;
            n.level = t.level + 1;
            q.push(n);
        }

        if ((t.val.second - 2 * t.val.first) < 0 && visit.find(make_pair(-1 * t.val.first, -1 * t.val.second + 2 * t.val.first)) == visit.end())
        {
            n.val.second = 2 * t.val.first - t.val.second;
            n.val.first = -1 * t.val.first;
            n.level = t.level + 1;
            q.push(n);
        }
    }
    return -1;
}

int main()
{
    long long int  t;
    cin >> t;
    while (t--)
    {
        long long int  x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << minOperations(x1, y1, x2, y2) << endl;
    }
    return 0;
}
