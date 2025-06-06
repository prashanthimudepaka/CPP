#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> graph, int node, unordered_set<int>& visited)
{
    if(visited.find(node)!=visited.end())
    {
        return;
    }
   
    cout<<node<<" ";
    visited.insert(node);
    for(int i:graph[node])
    {
        dfs(graph,i,visited);
    }
}
int main()
{
    vector<vector<int>> graph={
        {},
        {2,5},
        {1,3,5},
        {2,4,5},
        {3,5},
        {1,2,3,4}
    };
    unordered_set<int> visited;
    cout << "DFS Traversal: ";
    dfs(graph, 1, visited);
    return 0;

}

/*
class Solution {
  public:
     void dfs(int node, vector<vector<int>>&adj, vector<bool
    >&vis, vector<int>&ans){
        vis[node]=1;
        ans.push_back(node);
        for(auto &it:adj[node]){
            if(!vis[it]){
                dfs(it, adj, vis, ans);
            }
        }
    }
    
    
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<bool>vis(n, 0);
        vector<int>ans;
        dfs(0, adj, vis, ans);
        return ans;
    }
 

    
};

*/