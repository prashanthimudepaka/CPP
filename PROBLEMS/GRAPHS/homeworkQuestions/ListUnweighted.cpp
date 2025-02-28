#include <bits/stdc++.h>

using namespace std;

void adjacencyListUndirected(int n, vector<pair<int, int>> &edges) {
    vector<vector<int>> adjList(n);
    
    for (auto edge : edges) {
        int u = edge.first, v = edge.second;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Undirected edge
    }
    

    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int v : adjList[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    
    vector<pair<int, int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 0}};
    
    adjacencyListUndirected(n, edges);
    return 0;
}
