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
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Recursive function to build tree from user input
treeNode* buildTree()
{
    int val;
    cout << "Enter node value (-1 for NULL): ";
    cin >> val;

    if (val == -1)
        return nullptr;

    treeNode* newNode = new treeNode(val);

    cout << "Enter left child of " << val << endl;
    newNode->left = buildTree();

    cout << "Enter right child of " << val << endl;
    newNode->right = buildTree();

    return newNode;
}

void preOrder(treeNode* rootNode)
{
    if (rootNode)
    {
        cout << rootNode->data << ' ';
        preOrder(rootNode->left);
        preOrder(rootNode->right);
    }
}

void inOrder(treeNode* rootNode)
{
    if (rootNode)
    {
        inOrder(rootNode->left);
        cout << rootNode->data << ' ';
        inOrder(rootNode->right);
    }
}

void postOrder(treeNode* rootNode)
{
    if (rootNode)
    {
        postOrder(rootNode->left);
        postOrder(rootNode->right);
        cout << rootNode->data << ' ';
    }
}

int main()
{
    cout << "Build your tree:\n";
    treeNode* rootNode = buildTree();

    cout << "\nInorder -> ";
    inOrder(rootNode);
    cout << endl;

    cout << "Preorder -> ";
    preOrder(rootNode);
    cout << endl;

    cout << "Postorder -> ";
    postOrder(rootNode);
    cout << endl;

    return 0;
}
