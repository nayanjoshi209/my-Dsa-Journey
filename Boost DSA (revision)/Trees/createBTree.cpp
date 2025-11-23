#include<iostream>
#include <cstdlib>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

bool userChoise()
{
    int choise;
    cout<<"\nFor the tree left side press '1' or other buttonns to goes right on Tree: ";
    cin>>choise;

    if(choise == 1)
        return true;
    else
        return false;

}

TreeNode* buildTree()
{
    int vl;
    cout<<"\nEnter the rootNode value :(-1 re-present nullptr) ";
    cin>>vl;

    if(vl == -1)
        return nullptr;

    TreeNode* newNode = new TreeNode(vl);

    if(userChoise())
    {
        cout<<"\nEnter the leftNode vl : ";
        newNode->left = buildTree();
        cout<<"\nEnter the rightNode vl : ";
        newNode->right = buildTree();
    }
    else
    {
        cout<<"\nEnter the leftNode vl : ";
        newNode->left = buildTree();
        cout<<"\nEnter the rightNode vl : ";
        newNode->right = buildTree();

    }
    
    return newNode;
}

void printTree(TreeNode* head)
{
    if(!head)
        return;

    cout<<head->data<<' ';
    printTree(head->left);
    printTree(head->right);
}

TreeNode* deleteTree(TreeNode* head)
{
    if(!head)
        return nullptr;

    head->left = deleteTree(head->left);
    head->right = deleteTree(head->right);

    delete head;
    return nullptr;
}

int main()
{
    bool restart = true;
    while(restart)
    {
        system("cls || clear");
        TreeNode* head = buildTree();

        printTree(head);

        head = deleteTree(head);
        head = nullptr;
    


    char runAgain;
    cout<<"\n Perform same Task ? (type Y for \"Yes\" else application will finish): ";
    cin>>runAgain;
    restart = (runAgain == 'Y') ? true : false;
    }
    return 0;
}