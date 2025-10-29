#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* Next;

    Node(int val , Node* address = nullptr)
    {
        data = val;
        Next = address;
    }
};

class Insertion
{
    public:
    void insertAtHead(Node*& headNode , int key)  
    {
        {
            Node* keyNode = new Node(key, nullptr);
            keyNode->Next = headNode;
            headNode = keyNode; 
        }
    }
    void insertAtEnd(Node*& headNode , double key)
    {
        // find the list the empty
        if(headNode == nullptr)
        {
            insertAtHead(headNode , key);
            return;
        }

        // find the last Node
        Node* LastNode = headNode;
        while(LastNode->Next != nullptr)
        {
            LastNode = LastNode->Next;
        }
        Node* keyNode = new Node(key , nullptr);
        LastNode->Next = keyNode;
    }

    void insertAtPosition(Node*& headNode ,int key, int position)
    {
        if(headNode == nullptr || position <=1)
        {
            insertAtHead(headNode , key);
            return;
        }
        Node* prevNode = nullptr;
        Node* currNode = headNode;

        while(currNode && --position)
        {
            prevNode = currNode;
            currNode = currNode->Next;
        }

        Node* keyNode = new Node(key , nullptr);
        prevNode->Next = keyNode;
        keyNode->Next  =currNode;
    }

};

void printList(Node* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->Next;
    }
}

void deleteNode(Node*& headNode)
{
    while(headNode)
    {
       Node* newNode = headNode->Next;
        delete headNode;
        headNode = newNode;
    }
}

int main()
{
    // Node* headNode = new Node(12,nullptr);
    // Node* headNode = nullptr;
    Node* sixthNode = new Node(214, nullptr);
    Node* fifthNode = new Node(231, sixthNode);
    Node* fourthNode = new Node(100, fifthNode);
    Node* thirdNode = new Node(2302, fourthNode);
    Node* secondNode = new Node(1032, thirdNode);
    Node* headNode = new Node(12, secondNode);

    //Insert elemant
    Insertion obj;
    // obj.insertAtHead(headNode,2400);
    obj.insertAtHead(headNode,240000);
    // obj.insertAtHead(headNode,24000);

    // isnertValue at last
    obj.insertAtEnd(headNode , 6565);

    obj.insertAtPosition(headNode , 209 ,4);

    //printAll
    printList(headNode); 

    // delete all Nodes
    deleteNode(headNode);

    return 0;
}