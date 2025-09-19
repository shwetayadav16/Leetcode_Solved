class Solution {
public:
bool solve(vector<int>&visited,int source,vector<vector<int>>& graph,int destination){

    if(source==destination) return true;
    visited[source]=1;
    for(auto&neighbour:graph[source]){
        if(visited[neighbour]==0){//kya check karne ki jarurt hai jaise aisa hua visited[source]==True toh--->return false
            if(solve(visited,neighbour,graph,destination)){
                return true;
            }
        }
    }
    return false;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        for(auto&edge:edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        vector<int>visited(n);
        return solve(visited,source,graph,destination);
    }
};