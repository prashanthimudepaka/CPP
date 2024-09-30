#include <bits/stdc++.h>
using namespace std;

int main() {
   
    vector<vector<int>> matrix(3, vector<int>(3));  // 3x3 matrix

    cout << "Enter 9 values for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Output the matrix
    cout << "The 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
