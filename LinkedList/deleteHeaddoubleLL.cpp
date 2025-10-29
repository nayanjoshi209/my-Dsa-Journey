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
    if(!headNode->next)
    {
        headNode = nullptr;
        delete headNode;
    }

    else
    {
        ListNode* temp = headNode->next;
        delete headNode;
        headNode->prev = nullptr;
        headNode = temp;
    }
}

void deleteSpace(ListNode*& headNode)
{
    while(headNode)
    {
        ListNode* temp = headNode->next;
        delete headNode;
        headNode  = temp;
        headNode->prev = nullptr;
    }
}

int main()
{
    ListNode* sixNode = new ListNode(23,nullptr);
    ListNode* fifth = new ListNode(24,sixNode);
    ListNode* fourthNode = new ListNode(3,fifth);
    ListNode* thirdNode = new ListNode(10,fourthNode);
    ListNode* secondNode = new ListNode(1,thirdNode);
    ListNode* firstNode = new ListNode(36,secondNode);
    
    sixNode->prev = nullptr;
    fifth->prev = sixNode;
    fourthNode->prev = fifth;
    thirdNode->prev = fourthNode;
    secondNode->prev = thirdNode;
    firstNode->prev = secondNode;

    //printData
    cout<<"Original data is : ";
    printData(firstNode);
    
    deleteAtHead(firstNode);
    
    cout<<"\nEnter the deletion : ";
    printData(firstNode);

    deleteSpace(firstNode);

}