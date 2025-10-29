#include<iostream>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode ( int val)
    {
        data = val;
        left = right = nullptr;
    }
};

TreeNode* buildTree()
{
    int value;
    cout<<"Enter the rootNode value : ";
    cin>>value;

    if(value == -1)
        return nullptr;

    TreeNode* newNode = new TreeNode(value);

    cout<<"\nEnter left Node value : ";
    newNode->left = buildTree();

    cout<<"\nEnter right node vallue : ";
    newNode->right = buildTree();

    return newNode;
}

bool searchValue(TreeNode* root,int val)
{
    if(!root)
        return false;

    if(root->data == val)
        return true;

    return searchValue(root->left,val) || searchValue(root->right,val);
}

int main()
{
    //create a tree
    TreeNode* rootNode = buildTree();

    int vl;
    cout<<"\nEnter the vl you have find in tree : ";
    cin>>vl;

    cout<<searchValue(rootNode,vl);
}