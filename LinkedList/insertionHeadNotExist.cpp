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

void insertValueAtGivenIdx(int key , Node*& headNode ,Node* givenNode)
{
    Node* keyNode = new Node(key,nullptr);
 
    // if the list is the empty
    if(!givenNode)
    {
        headNode = keyNode;
        return;
    }

    keyNode->Next = givenNode->Next;
    givenNode->Next = keyNode;

}

void printList(Node* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->Next;
    }
}

void deleteNode(Node* headNode)
{
    while(headNode)
    {
        Node* nextNode = headNode->Next;
        delete headNode;
        headNode = nullptr;
        headNode = nextNode;
    }
}

int main()
{
    Node* headNode = nullptr;

    insertAtHead(123,headNode);
    insertAtHead(1455,headNode);
    insertAtHead(233,headNode);
    insertAtHead(17,headNode);
    insertAtHead(3,headNode);
    insertAtHead(189,headNode);
    insertAtHead(165,headNode);
    insertAtHead(99,headNode);
    insertAtHead(86,headNode);

    cout<<"Linked list : \n";
    printList(headNode);

    insertValueAtGivenIdx(2094,headNode,headNode->Next->Next);

    cout<<"\nAfter the updation : \n";
    printList(headNode);

    return 0;
}