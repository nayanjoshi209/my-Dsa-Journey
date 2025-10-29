#include<iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class Insertion {
public:
    Node* insertAtHead(int key, Node*& headNode)
     {
        Node* tempNode = new Node(key);
        if (headNode == nullptr) 
        {
            headNode = tempNode;
        } 
        else
        {
            tempNode->next = headNode;
            headNode = tempNode;
        }
        return headNode;
    }
};

void printList(Node*& headNode)
 {
    Node* temp = headNode;
    while (temp != nullptr) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node*& headNode) 
{
    while (headNode != nullptr) {
        Node* tempNode = headNode->next;
        delete headNode;
        headNode = tempNode;
    }
}

int main() 
{
    Insertion obj;
    Node* headNode = nullptr;
    headNode = obj.insertAtHead(1, headNode);
    headNode = obj.insertAtHead(2, headNode);
    headNode = obj.insertAtHead(3, headNode);
    headNode = obj.insertAtHead(4, headNode);
    headNode = obj.insertAtHead(5, headNode);

    // Insert Node at particular position
    int x = 3; // position (middle)
    int value = 321; // value
    Node* temp = headNode;
    x--;
    while (x--)
    {
        temp = temp->next;
    }
    Node* temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print list
    printList(headNode);

    // Delete Node
    deleteNode(headNode);
    return 0;
}

