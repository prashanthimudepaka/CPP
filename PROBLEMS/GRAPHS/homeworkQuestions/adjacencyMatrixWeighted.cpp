#include <bits/stdc++.h>

using namespace std;

void adjacencyMatrixWeightedDirected(int n, vector<tuple<int, int, int>> &edges) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    
    for (auto edge : edges) {
        int u, v, w;
        tie(u, v, w) = edge;
        matrix[u][v] = w; 
    }
    
    // Print matrix
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    vector<tuple<int, int, int>> edges = {{0, 1, 5}, {1, 2, 3}, {2, 3, 2}, {3, 0, 7}};
    
    adjacencyMatrixWeightedDirected(n, edges);
    return 0;
}
