#include<bits/stdc++.h>
using namespace std;

class solution{

public:

vector<int> toposort(int N,vector<int> adj[]){
    queue<int> q;
    vector<int> indegree(N,0);

    for(int i=0;i<N;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }

    for(int i=0;i<N;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    vector<int> topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    return topo;
}


};

     int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);




return 0;
}