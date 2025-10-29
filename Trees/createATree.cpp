#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node (int val)
    {
        data = val;
        left = right = nullptr;
    }
};

int index=-1;
Node* createTree(vector<int>ans)
{
    index++;

    if(ans[index] == -1)
        return nullptr;

    Node* newNode = new Node(ans[index]);
    newNode->left = createTree(ans);
    newNode->right = createTree(ans);

    return newNode;
}

void preOrder(Node* root)
{
    if(root == nullptr)
        return;

    preOrder(root->left);
    cout<<root->data<<' ';
    preOrder(root->right);
}

int main()
{
    vector<int>ans = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = createTree(ans);

    preOrder(root);
}