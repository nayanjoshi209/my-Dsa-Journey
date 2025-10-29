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
    Node* keyNode = new Node(key , nullptr);
    keyNode->Next = headNode;
    headNode = keyNode;
}

void insertAfterGiveNode(Node*& headNode , int key , Node* givenNode)
{
    Node* keyNode = new Node(key , nullptr);
    if(!givenNode)
    {
        headNode = keyNode;
        return;
    }

    keyNode-> Next = givenNode->Next;
    givenNode->Next = keyNode;

}

// Method to print values

void printList(Node* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->Next;
    }
}

int main()
{
    Node* headNode = nullptr;

    //create a linked list at n size
    int n =6;

    for(int i=n;i>=1;i--)
    {
        insertAtHead(i,headNode);
    }

    // print call
    cout<<"Linked list : \n";
    printList(headNode);

    //Inserction call
    insertAfterGiveNode(headNode , 500 ,headNode->Next->Next->Next);

    //printCall
    cout<<"\nAfter the insertion the linkedList : \n";
    printList(headNode);

    return 0;
    
}