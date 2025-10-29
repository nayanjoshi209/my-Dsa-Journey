#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

void printList(Node* HeadNode)
{
    while(HeadNode != nullptr)
    {
        cout<<HeadNode->data<<' '<<endl;
        HeadNode = HeadNode->next;
    }
}

int main()
{
    Node* HeadNode = new Node;
    HeadNode->data =10;
    HeadNode->next = nullptr;

    printList(HeadNode);
}