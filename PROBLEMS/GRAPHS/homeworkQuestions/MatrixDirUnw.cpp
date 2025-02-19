#include <bits/stdc++.h>

using namespace std;

void adjacencyMatrixDirected(int n, vector<pair<int, int>> &edges) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    
    for (auto edge : edges) {
        int u = edge.first, v = edge.second;
        matrix[u][v] = 1; // Directed edge
    }
    
    // Print matrix
    for (const auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    vector<pair<int, int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 0}};
    
    adjacencyMatrixDirected(n, edges);
    return 0;
}
