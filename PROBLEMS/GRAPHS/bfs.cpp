#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> graph,int start)
{
    unordered_set<int> visited;
    queue<int> q;
    q.push(start);
    visited.insert(start);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbors:graph[node])
        {
                if(visited.find(neighbors)==visited.end())//if not found, find() returns visited.end().
                {
                    //If node is found, it returns an iterator pointing to that element.
                    visited.insert(neighbors);
                    q.push(neighbors);
                }
        }
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
    int start=1;
    bfs(graph, start);
return 0;
}