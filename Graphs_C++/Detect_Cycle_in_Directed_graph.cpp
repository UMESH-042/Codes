#include <bits/stdc++.h>
#define c(o) cout << x << endl
#define loop(i, m, n) for (ll i = m; i < n; i++)
#define ll long long
#define nl cout << endl
#define countDig(n) floor(log10(n)) + 1
using namespace std;

class solution
{

private:
    bool checkcycle(int node, vector<int> adj[], int vis[], int dfsvis[])
    {
        vis[node] = 1;
        dfsvis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (checkcycle(it, adj, vis, dfsvis))
                {
                    return true;
                }
            }
            else if (dfsvis[it])
            {
                return true;
            }

            dfsvis[node] = 0;
            return false;
        }
    }

public:
    bool isCyclic(int N, vector<int> adj[])
    {
        int vis[N], dfsvis[N];
        memset(vis, 0, sizeof(vis));
        memset(dfsvis, 0, sizeof(dfsvis));

        for (int i = 0; i < N; i++)
        {
            if (!vis[i])
            {
                if (checkcycle(i, adj, vis, dfsvis))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}