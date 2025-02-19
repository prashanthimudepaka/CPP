#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 4; // Number of vertices
    vector<pair<int, int>> adjList[n]; // Adjacency list

    
    vector<tuple<int, int, int>> edges = {{0, 1, 5}, {1, 2, 3}, {2, 3, 2}, {3, 0, 7}};

    // Construct adjacency list
    for (auto e : edges) {
        int u, v, w;
        tie(u, v, w) = e;
        adjList[u].push_back({v, w});
    }

    // Print adjacency list
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (auto p : adjList[i]) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
