#include<iostream>
using namespace std;

class treeNode
{
    public:
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

void preOrder(treeNode* rootNode)
{
    if(rootNode)
    {
        cout<<rootNode->data<<' ';
        preOrder(rootNode->left);
        preOrder(rootNode->right);
    }
}

void inOrder(treeNode* rootNode)
{
    if(rootNode)
    {
        inOrder(rootNode->left);
        cout<<rootNode->data<<' ';
        inOrder(rootNode->right);
    }
}

void postOrder(treeNode* rootNode)
{
    if(rootNode)
    {
        postOrder(rootNode->left);
        postOrder(rootNode->right);
        cout<<rootNode->data<<' ';
    }
}

int main()
{
    treeNode* rootNode = new treeNode(1);
    rootNode->left = new treeNode(2);
    rootNode->right = new treeNode(3);
    rootNode->left->left = new treeNode(4);
    rootNode->left->right = new treeNode(10);
    rootNode->right->left = new treeNode(5);
    rootNode->right->right = new treeNode(50);

    cout<<"inorder -> ";
    preOrder(rootNode);
    cout<<endl;

    cout<<"preorder -> ";
    inOrder(rootNode);
    cout<<endl;

    cout<<"postorder -> ";
    postOrder(rootNode);
    
    return 0;
}