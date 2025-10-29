#include<iostream>
using namespace std;
class Node
{
    public:

    int data;
    Node* Next;

    Node(int val , Node* address)
    {
        data = val;
        Next = address;
    }

};

void insertAtHead(int key , Node*& headNode)
{
    Node* keyNode = new Node(key,nullptr);
    keyNode->Next = headNode;
    headNode  = keyNode;
}

bool isPresernt(int target , Node*& headNode)
{
    while(headNode)
    {
        if(headNode->data == target)
        return 1;
        headNode = headNode->Next;
    }
    return 0;
}

void deleteNode(Node* headNode)
{
    while(headNode)
    {
        Node* nextNode = headNode->Next;
        delete headNode;
        headNode = nextNode;
    }
}    
int main()
{
    Node* headNode = nullptr;

    int n;
    cout<<"Enter the size of Node : \n";
    cin>>n;

    int target;
    cout<<"enter the target value : \n";
    cin>>target;

    for(int i=n;i>=1;i--)
    {
        insertAtHead(i,headNode);
    }

    // cheak is present the target value;
    cout<<isPresernt(target , headNode);

    // delete the node
    deleteNode(headNode);
}
