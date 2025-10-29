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

void preOrder(Node* root)
{
    if(root == nullptr)
    return;

    // Node
    cout<<root->data<<' ';

    // left side me
    preOrder(root->left);

    // right side mmai
    preOrder(root->right);
    
}

void inOrder(Node* root)
{
    if(root == nullptr)
    return;
    // left
    inOrder(root->left);
    // node
    cout<<root->data<<' ';
    // right
    inOrder(root->right);
}

void postOrder(Node* root)
{
    if(root == nullptr)
    return ;

    // left
    postOrder(root->left);
    
    // right
    postOrder(root->right);
    // Node
    cout<<root->data<<" ";

}

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

    // inorderCalled
    cout<<"\ninOrder is : ";
    inOrder(root);

    // preOder called
    cout<<"\nPre order is : ";
    preOrder(root);

    // postOrder called
    cout<<"\nPost order is : ";
    postOrder(root);

}