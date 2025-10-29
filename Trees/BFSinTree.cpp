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
void BFS(treeNode* rootNode)
{
    queue<treeNode*>q;
    q.push(rootNode);
    q.push(nullptr);

    while(!q.empty())
    {
        treeNode* curr = q.front();
        q.pop();

        if(curr == nullptr)
        {
            if(!q.empty())
            {
                cout<<endl;
                q.push(nullptr);
                continue;
            }
            else
                break;
        }

        cout<<curr->data<<' ';

        if(curr->left)
            q.push(curr->left);

        if(curr->right)
            q.push(curr->right);
    }
}

void deleteTree(treeNode* rootNode)
{
    if(rootNode)
    {
        delete rootNode->left; 
        delete rootNode->right; 
        delete rootNode;
    }
}

int main()
{
    treeNode* root = buildTree();

    cout<<"\nBFS -> : \n";
    BFS(root);

    deleteTree(root);
    root = nullptr;
}