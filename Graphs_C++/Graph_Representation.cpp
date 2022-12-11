// Storing Graph using Adjacency Matrix
// They will give N and M,
// wher N = Number of Nodes and M = Number of Edges as input

// This storing method is used for the smaller values of n
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    // declare the adjacent matrix

    int adj[n + 1][n + 1];

    // take edge as input

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    // Sapce Complexity = O(n*n);
    return 0;
}