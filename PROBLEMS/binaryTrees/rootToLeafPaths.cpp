#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void findPaths(TreeNode* root, vector<int>& path) {
    if (root==nullptr) return;

    path.push_back(root->val);

    if (!root->left && !root->right) {
        for (int val : path) {
            cout << val << " ";
        }
        cout << endl;
    } else {
        findPaths(root->left, path);
        findPaths(root->right, path);
    }

    path.pop_back();
}



int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    cout << "Paths from root to leaf nodes:\n";
     vector<int> path;
    findPaths(root, path);

    return 0;
}
