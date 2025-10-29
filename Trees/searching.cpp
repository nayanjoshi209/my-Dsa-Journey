#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;

    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

Node* insert(Node* root,int target)
{
    if(!root)
    {
        Node* temp = new Node(target);
        return temp;
    }

    // left Traveler
    if(target<root->data)
    root->left = insert(root->left,target);

    //right Travelser
    else
    root->right = insert(root->right,target);

    return root;
};

// void inOrder(Node* root)
// {
//     if(!root)
//     return;

//     inOrder(root->left);
//     cout<<root->data<<' ';
//     inOrder(root->right);
// }

// void preOrder(Node* root)
// {
//     if(!root)
//     return;

//     cout<<root->data<<' ';
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void postOrder(Node* root)
// {
//     if(!root)
//     return;

//     postOrder(root->right);
//     postOrder(root->left);

//     cout<<root->data<<' ';
// }

bool findEl(Node* root,int target)
{
    if(!root)
    return 0;

    if(root->data==target)
    return 1;

    if(root->data<target)
    return findEl(root->left,target);
 
    else
    return findEl(root->right,target);
}

int main()
{
    int arr[] = { 12,34,543,25,65,67,8,9,100,1};

    Node* root = nullptr;
    for(int i=0;i<10;i++)
    {
        root = insert(root,arr[i]);
    }

    // cout<<"Is-There InOrder Travelser \n";
    // inOrder(root);

    // cout<<"\nIs-There PreOrder Travelser \n";
    // preOrder(root);

    // cout<<"\nIs-There PostOrder Travelser \n";
    // postOrder(root);

    int target;
    cout<<"Enter the element whoes finding in Tree : \n";
    cin>>target;

    cout<<findEl(root,target);
};