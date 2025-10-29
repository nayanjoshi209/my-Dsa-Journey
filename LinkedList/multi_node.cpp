#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

//method to print ll
//0(n) & 0(1)
void printList(Node* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode=headNode->next;
    }
}

int main()
{
    Node* headNode = new Node;
    Node* secoundNode = new Node;
    Node* thirdNode = new Node;

    // connecting & in;izattion dta
    headNode->data = 10;
    headNode->next = secoundNode;
    secoundNode->data = 20;
    secoundNode->next = thirdNode;
    thirdNode->data = 30;
    thirdNode->next = nullptr;

    // print call
    cout<<"Linked list : ";
    printList(headNode);

    //Deleting extra new heap space
    delete headNode;
    delete secoundNode;
    delete thirdNode;
}