#include<bits/stdc++.h>
using namespace std;

class Solution {


    public:

void Shortest_distance(vector<vector<int>>& matrix){

    int n=matrix.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=1e9;
            }
            if(i==j){
                matrix[i][j]=0;
            }
        }
    }

for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
        }
    }
}

// If it contains negative cycle
for(int i=0;i<n;i++)[
    if(matrix[i][i]<0){
        cout<<"It contains negative cycle"<<endl;
        // return -1;
    }
]

// Time Complexity :- O( n^3 )
// Space Complexity :- O( n^2 )


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==1e9){
                matrix[i][j]=-1;
            }
        }
    }
}



}

     int main() {


return 0;
}