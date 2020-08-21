    #include <bits/stdc++.h>

    using namespace std;

    int src, dest;
    int vis[20001];
    int dist[20001];

    void bfs()
    {
        int cur, nextUp, nextDown;
        queue<int> q;
        vis[src] = 1;
        dist[src] = 0;
        q.push(src);
        while (!q.empty())
        {
            cur = q.front();
            q.pop();
            nextUp = 2*cur;
            nextDown = cur - 1;
            if (nextUp <= 2*dest && !vis[nextUp])
            {
                vis[nextUp] = 1;
                dist[nextUp] = dist[cur] + 1;
                q.push(nextUp);
            }
            if (nextDown >= 0 && !vis[nextDown])
            {
                vis[nextDown] = 1;
                dist[nextDown] = dist[cur] + 1;
                q.push(nextDown);
            }
        }
    }

    int main()
    {
        cin >> src >> dest;

        dist[dest] = -1;
        bfs();
        cout << dist[dest];
    }