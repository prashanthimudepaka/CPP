#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Preorder Traversal Function
void InOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return; // Base case: If the node is null, return
    }

    // Visit the root node
   

    // Traverse the left subtree
    InOrderTraversal(root->left);
 cout << root->val << " ";
    // Traverse the right subtree
    InOrderTraversal(root->right);
    
}

// Main Function
int main() {
    // Example Tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Ineorder Traversal: ";
    InOrderTraversal(root); 

    return 0;
}
