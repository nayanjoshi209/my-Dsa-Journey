#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;
    ListNode* prev;

    ListNode(int val , ListNode* nextNode = nullptr) : data(val) , next(nextNode) {}
};


void insertAtTail(ListNode*& headNode)
{
    ListNode* head  = headNode;
    ListNode* newTailNode  = new ListNode(500);
    if(!headNode)
    {
        headNode = newTailNode;
        headNode->next = nullptr;
        headNode->prev = nullptr;
        return;
    }

    while(headNode)
    {
        if(!headNode->next)
        {
            headNode->next = newTailNode;
            newTailNode->prev = headNode;
            newTailNode->next = nullptr;
            headNode = head;
            return;
        }
        headNode = headNode->next;
    }
}

void printData(ListNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}


int main()
{
    ListNode* sixNode = new ListNode(6,nullptr);
    ListNode* fifth = new ListNode(5,sixNode);
    ListNode* fourthNode = new ListNode(4,fifth);
    ListNode* thirdNode = new ListNode(3,fourthNode);
    ListNode* secondNode = new ListNode(2,thirdNode);
    ListNode* firstNode = new ListNode(1,secondNode);
    
    sixNode->prev = fifth;
    fifth->prev = fourthNode;
    fourthNode->prev = thirdNode;
    thirdNode->prev = secondNode;
    secondNode->prev = firstNode;
    firstNode->prev = nullptr;

    //printData
    cout<<"Original data is : ";
    printData(firstNode);

    insertAtTail(firstNode);

    cout<<"\nAfter operation data is data is : ";
    printData(firstNode);
}