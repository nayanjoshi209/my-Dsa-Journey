#include<iostream>
using namespace std;
#define size 5

class listNode
{
    public:
    int data;
    listNode* next;

    listNode(int value , listNode* nextNode = nullptr) : data(value) , next(nextNode) {}
};

listNode* createLL(int i)
{
    if(i==size)
    return nullptr;

    listNode* nextNode = createLL(i+1);
    listNode* headNode = new listNode(i,nextNode);
    return headNode;
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
    listNode* headNode = createLL(0);

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