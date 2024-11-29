#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    Node *left;
    int data;
    Node *right;
public:
Node(int data1,Node* left1, Node *right1)
{
    data=data1;
    left=left1;
    right=right1;

}
Node(int data)
{
    data=data;
    left=nullptr;
    right=nullptr;

}

};

int MaxDepth(Node* root )
{
    if(root==nullptr){
         return 0;
    }
    int left=MaxDepth(root->left);
    int right=MaxDepth(root->right);
    return max(left,right)+1; // (+1 is consider root node)
    
   
}


int main()
{
//     1
// 2     3
//     4   5
//    6  
    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);
    root->right->left->left=new Node(6);
    cout<<MaxDepth(root);





}