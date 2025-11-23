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

void insertAtHead(ListNode*& headNode)
{
    ListNode* newNode = new ListNode(500);

    if(!headNode)
    {
        headNode = newNode;
        headNode->prev = nullptr;
        headNode->next = nullptr;
    }

    else
    {
        newNode->next = headNode;
        headNode->prev = newNode;
        newNode->prev = nullptr;
        headNode = newNode;
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
    
    insertAtHead(firstNode);
    
    cout<<"\nEnter the deletion : ";
    printData(firstNode);

    deleteSpace(firstNode);
}