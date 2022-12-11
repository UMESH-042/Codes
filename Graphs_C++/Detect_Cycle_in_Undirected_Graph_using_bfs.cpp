#include<bits/stdc++.h>

using namespace std;


class Solution{

bool checkForCycle(int s,int v,vector<int> adj[],vector<int>& visited){

    queue<pair<int,int>> q;
    visited[s]=true;
    q.push({s,-1});

    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();


        for(auto it: adj[node]){
            if(!visited[it]){
                visited[it]=true;
                q.push({it,node});
            }else if(parent!=it){
                return true;
            }
        }
    }
    return false;

}


bool isCycle(int v,vector<int> adj[]){
    vector<int> vis(v+1,0);
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            if(checkForCycle(i,v,adj,vis)){
                return true;
            }
        }
    }
}
};

     int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);


return 0;
}