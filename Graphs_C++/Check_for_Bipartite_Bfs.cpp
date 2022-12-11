#include <bits/stdc++.h>
#define c(o) cout << x << endl
#define loop(i, m, n) for (ll i = m; i < n; i++)
#define ll long long
#define nl cout << endl
#define countDig(n) floor(log10(n)) + 1
using namespace std;

bool bipartiteBfs(int src, vector<int> adj[], int color[])
{
    queue<int> q;
    q.push(src);
    color[src] = 1;
    while (!q.empty())
    {
        int node = q.front();   
        q.pop();
        for (auto it : adj[node])
        {
            if (color[it] == -1)
            {
                color[it] = 1 - color[node];
                q.push(it);
            }
            else if (color[it] == color[node])
            {
                return false;
            }
        }
    }
    return true;
}

bool checkBipartite(vector<int> adj[], int n)
{
    int color[n];
    memset(color, -1, sizeof(color));

    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            if (!bipartiteBfs(i, adj, color))
            {
                return flase;
            }
        }
    }
    return true;
}

int main()
{

    int n, m;
    cin >> n >> m;
    vector<int> adj[n];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (checkBipartite(adj, n))
    {
        cout < "YES" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}