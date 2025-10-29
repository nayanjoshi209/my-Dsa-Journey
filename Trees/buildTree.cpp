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

treeNode* buildTree()
{
    int vl;
    cout<<"\nEnter the root node values (-1 will be nullptr): ";
    cin>>vl;

    if(vl == -1)
        return nullptr;
    
    treeNode* newNode = new treeNode(vl);

    cout<<"\nEnter the value of left child of: "<<vl;
    newNode->left = buildTree();

    cout<<"\nEnter the value of right child of: "<<vl;
    newNode->right = buildTree();

    return newNode;
}

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
    treeNode* rootNode = buildTree();

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