#include <bits/stdc++.h>

using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(V + 1, 0);
    // Here V = Number of Nodes
    for (int i = 1; i <= V; i++)
    {
        if (!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i] = 1; // Marking as visited
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                // Checking for the Adjacent Nodes of the "node"
                for (auto it : adj[node])
                {
                    if (!vis[it])
                    {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    return bfs;
}
int main()
{

    // Traversing the Adjacent Nodes at first after then moving to next Nodes

    // Time Complexity will be O(N+E) and Space Complexity will be O(N+E) + O(N) + O(N)



    return 0;
}