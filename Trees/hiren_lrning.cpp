// costruct a nood
// Program to create a binary tree manually ~ coded by Hiren
#include <iostream>
using namespace std;

class TreeNode { // Node template (user defined datatype)
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    // Init constructor
    TreeNode(int val, TreeNode* left, TreeNode* right) {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

// Method to print the tree using inorder traversal - O(N) & O(H)
void inorder(TreeNode* rootNode) {
    if(rootNode) {
        inorder(rootNode->left);
        cout<<rootNode->val<<' ';
        inorder(rootNode->right);
    }
}

// Method to print the tree using preorder traversal - O(N) & O(H)
void preorder(TreeNode* rootNode) {
    if(rootNode) {
        cout<<rootNode->val<<' ';
        preorder(rootNode->left);
        preorder(rootNode->right);
    }
}

// Method to print the tree using postorder traversal - O(N) & O(H)
void postorder(TreeNode* rootNode) {
    if(rootNode) {
        postorder(rootNode->left);
        postorder(rootNode->right);
        cout<<rootNode->val<<' ';
    }
}

// Driver code
int main() {
    // Creating, connecting nodes and initializing their data
    TreeNode* child7   = new TreeNode(7, nullptr, nullptr);
    TreeNode* child6   = new TreeNode(6, nullptr, nullptr);
    TreeNode* child5   = new TreeNode(5, nullptr, nullptr);
    TreeNode* child4   = new TreeNode(4, nullptr, nullptr);
    TreeNode* child3   = new TreeNode(3, child6, child7);
    TreeNode* child2   = new TreeNode(2, child4, child5);
    TreeNode* rootNode = new TreeNode(1, child2, child3);

    // Print call
    cout<<"Inorder traversal of the tree is: ";
    inorder(rootNode);
    cout<<'\n';

    // Print call
    cout<<"Preorder traversal of the tree is: ";
    preorder(rootNode);
    cout<<'\n';

    // Print call
    cout<<"Postorder traversal of the tree is: ";
    postorder(rootNode);
    cout<<'\n';

    return 0;
}