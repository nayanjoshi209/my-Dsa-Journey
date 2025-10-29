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

void printData(ListNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

void deleteAtHead(ListNode*& headNode)
{
    if(!headNode) 
    {
        return;
    }
    else if(!headNode->next)
    {
        delete headNode;
        headNode = nullptr;
    }
    else
    {
        ListNode* newHead = headNode->next;
        delete headNode;
        newHead->prev = nullptr;
        headNode = newHead;
    }
}

void deleteSpace(ListNode*& headNode)
{
    while(headNode)
    {
        ListNode* temp = headNode->next;
        delete headNode;
        headNode = temp;
        headNode->prev = nullptr;
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
    
    deleteAtHead(firstNode);
    
    cout<<"\nEnter the deletion : ";
    printData(firstNode);

    deleteSpace(firstNode);
}