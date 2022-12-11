#include <bits/stdc++.h>
using namespace std;

class solution
{

    void findtoposort(int node, vector<int> &vis, stack<int> &s, vector<int> adj[])
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                findtoposort(it, vis, s, adj);
            }
        }
        s.push(node); // The code is almost same as a DFS the only change is the return value
    }

public:
    vector<int> toposort(int N, vector<int> adj[])
    {
        stack<int> s;

        vector<int> vis(N, 0);
        for (int i = 0; i < N; i++)
        {
            if (vis[i] == 0)
            {
                findtoposort(i, vis, s, adj);
            }
        }

        vector<int> topo;
        while (!s.empty())
        {
            topo.push_back(s.top());
            s.pop();
        }
        return topo;
    }
};

int main()
{

    return 0;
}