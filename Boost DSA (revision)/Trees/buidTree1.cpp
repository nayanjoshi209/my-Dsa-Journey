#include<iostream>
#include<queue>
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
    cout<<"\nEnter the values of Node : -1 represent nullptr : ";
    cin>>vl;

    if(vl == -1)
        return nullptr;

    treeNode* newNode = new treeNode(vl);

    cout<<"\nEnter the left node values : "<<vl;
    newNode->left = buildTree();

    cout<<"\nEnter the right node values : "<<vl;
    newNode->right = buildTree();

    return newNode;
}

void preOrder(treeNode* rootNode)
{
    if(rootNode)
    {
        preOrder(rootNode->left);
        cout<<rootNode->data<<' ';
        preOrder(rootNode->right);
    }
}

void inOrder(treeNode* rootNode)
{
    if(rootNode)
    {
        cout<<rootNode->data<<' ';
        inOrder(rootNode->left);
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

void levelOrder(treeNode* rootNode)
{
    queue<treeNode*>q;

    q.push(rootNode);
    
    while(!q.empty())
    {
        treeNode* curr = q.front();
        q.pop();

        cout<<curr->data<<' ';

        if(curr->left)
            q.push(curr->left);
            
        if(curr->right)
            q.push(curr->right);
    }
    cout<<endl;
}
int main()
{
    treeNode* root = buildTree();

    cout<<"\npreOrder -> : ";
    preOrder(root);
    
    cout<<"\npreOrder -> : ";
    inOrder(root);

    cout<<"\npreOrder -> : ";
    postOrder(root);

    cout<<"\nLevelOrder -> : ";
    levelOrder(root);
}