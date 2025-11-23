#include<iostream>
using namespace std;

class listNode
{
    public:
    int data;
    listNode* next;

    listNode(int value = 5, listNode* nextNode = nullptr) : data(value) , next(nextNode) {}
};

void createLL(int key , listNode*& headNode, listNode*& tailNode)
{
    listNode* newTail = new listNode();

    if(!headNode)
        headNode = newTail;
    else
        tailNode->next = newTail;

    tailNode = newTail;
}

void printValues(listNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode=headNode->next;
    }
}

listNode* reverseNodes(listNode*& headNode)
{
    listNode* currNode = headNode;
    listNode* prevNode = nullptr;
    listNode* nextNode = nullptr;

    while(currNode)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;

        prevNode = currNode;
        currNode = nextNode;
    }
    return prevNode;
}

void deleteSpace(listNode*& headNode)
{
    while(headNode)
    {
        listNode* temp = headNode->next;
        delete headNode;
        headNode = temp;
    }
}

int main()
{
    listNode* headNode = nullptr;
    listNode* tailNode = nullptr;

    

    // create LL by loop
    for(int i=1;i<=10;i++)
        createLL(i*5,headNode,tailNode);

    // print values
    cout<<"Original LinkList values are -> ";
        printValues(headNode);

    // reverse nodes;
        listNode* newNode = reverseNodes(headNode);

    // print values
    cout<<"\nAfter the reverse Nodes values of Nodes are -> ";
       printValues(newNode);

    //delete space
    cout<<"\nspace delete succesfully : ";
        deleteSpace(newNode);
}