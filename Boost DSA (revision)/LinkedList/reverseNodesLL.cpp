#include<iostream>
using namespace std;

class listNode
{
    public:
    int data;
    listNode* next;
};

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
    listNode* headNode = new listNode();
    listNode* secondNode = new listNode();
    listNode* thirdNode = new listNode();
    listNode* fourthNode = new listNode();
    listNode* fiftNode = new listNode();
    listNode* sixthNode = new listNode();

    // set the LL
    headNode->data = 15;
    headNode->next = secondNode;
   
    secondNode->data = 25;
    secondNode->next = thirdNode;

    thirdNode->data = 225;
    thirdNode->next = fourthNode;

    fourthNode->data = 153;
    fourthNode->next = fiftNode;

    fiftNode->data = 145;
    fiftNode->next = sixthNode;

    sixthNode->data = 100;
    sixthNode->next = nullptr;

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