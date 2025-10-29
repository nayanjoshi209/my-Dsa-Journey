#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left , *right; 

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }

};

Node* binaryTree()
{
    int x;
    cin>>x;

    if(x==-1)
    return nullptr;

    Node *temp = new Node(x);

    // left side create
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = binaryTree();
    // right  side create
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = binaryTree();
    return temp;
}

int main()
{
    cout<<"Enter the Root Node : ";
    Node *root = binaryTree();;
    // root = binaryTree();

}