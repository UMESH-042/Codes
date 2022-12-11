#include<bits/stdc++.h>


// More Optimized way to store the graph is to use Adjacency List
// which takes space complexity of O(N+2E) which is way better than O(N*N)


using namespace std;

     int main() {
int n,m;
cin>>n>>m;

vector<int> adj[n+1];
// vector<pair<int,int>> adj[n+1]; In case of weighted graph

for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);//adj[u].push_back({v,wt});

    adj[v].push_back(u);  //adj[u].push_back({u,wt});    // if this is directed graph the this line should be deleted
}



return 0;
}