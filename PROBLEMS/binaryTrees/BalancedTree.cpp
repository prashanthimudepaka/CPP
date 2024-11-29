

#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
int MaxLength(TreeNode* root)
{
    if(root==nullptr) return 0;
    int left=MaxLength(root->left);
    int right=MaxLength(root->right);
    return max(left,right)+1;

}
    bool isBalanced(TreeNode* root) {
        bool Balanced=false;
        int l=0;
        int r=0;
        if(root!=nullptr && root->left && root->right){
         l=MaxLength(root->left);
         r=MaxLength(root->right);
        }
        cout<<"l="<<l<<"r="<<r<<endl;
        //cout<<abs(l-r);
        if(abs(l-r)<=1)
        {
            Balanced=true;
        }
        return Balanced;
    }

    int main()
    {
 TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    if(isBalanced(root))
    cout<<"true";
    else
    cout<<"false";

    }