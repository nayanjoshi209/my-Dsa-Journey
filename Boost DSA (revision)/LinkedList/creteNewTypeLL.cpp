#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int value = 5, ListNode* nextNode = nullptr) : data(value) , next(nextNode) {}
};


void printValues(ListNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode=headNode->next;
    }
}

ListNode* reverseNodes(ListNode*& headNode)
{
    ListNode* currNode = headNode;
    ListNode* prevNode = nullptr;
    ListNode* nextNode = nullptr;

    while(currNode)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;

        prevNode = currNode;
        currNode = nextNode;
    }
    return prevNode;
}

void deleteSpace(ListNode*& headNode)
{
    while(headNode)
    {
        ListNode* temp = headNode->next;
        delete headNode;
        headNode = temp;
    }
}

int main()
{
    ListNode* headNode = new ListNode(1,new ListNode(2,new ListNode(3,new ListNode(4, new ListNode(5, new ListNode(6,nullptr))))));

    // print values
    cout<<"Original LinkList values are -> ";
        printValues(headNode);

    // reverse nodes;
        ListNode* newNode = reverseNodes(headNode);

    // print values
    cout<<"\nAfter the reverse Nodes values of Nodes are -> ";
       printValues(newNode);

    //delete space
    cout<<"\nspace delete succesfully : ";
        deleteSpace(newNode);
}