#include<iostream>
using namespace std;

class listNode
{
    public:
    int data;
    listNode* next;

    listNode(int value , listNode* nextNode = nullptr) : data(value) , next(nextNode) {}
};

void insertNode(int key ,listNode*& headNode ,listNode*& tailNode)
{
    listNode* newTail = new listNode(key); 

    if(!headNode)
        headNode = newTail;
    else
        tailNode->next = newTail;

    tailNode = newTail;
}

void printLL(listNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

listNode* reverseNodes(listNode* headNode)
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


void deleteLL(listNode*& headNode)
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

   for(int i=1;i<=10;i++)
    insertNode(i*2,headNode,tailNode);


    // print LL
    cout<<"Original LinkedList is -> ";
    printLL(headNode);

    // reverse Nodes
    cout<<"\nAfter LinkedList values To Revesral Nodes -> ";
    listNode* newHead = reverseNodes(headNode);

    // print Reverse Nodes values
    printLL(newHead);

    // delete LL
    deleteLL(newHead);
    cout<<"\nlinkedList deleted succesfully";
}