#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;
    ListNode* prev;

    ListNode(int val,ListNode* nextNode = nullptr) : data(val) , next(nextNode) {}
};

void printData(ListNode* headNode)
{
    while(headNode)
    {
        if(headNode->prev)
        cout<<"prevData "<<headNode->prev->data;
        cout<<" currData "<<headNode->data;
        if(headNode->next)
        cout<<" nextData "<<headNode->next->data;
        cout<<endl;

        headNode  = headNode->next;
    }
}

int main()
{
    ListNode* sixNode = new ListNode(6,nullptr);    
    ListNode* fifthNode = new ListNode(5,sixNode);
    ListNode* fourthNode = new ListNode(4,fifthNode);
    ListNode* thirdNode = new ListNode(3,fourthNode);
    ListNode* secondNode = new ListNode(2,thirdNode);
    ListNode* firstNode = new ListNode(1,secondNode);

    sixNode->prev = fifthNode;
    fifthNode->prev = fourthNode;
    fourthNode->prev = thirdNode;
    thirdNode->prev = secondNode;
    secondNode->prev = firstNode;
    firstNode->prev = nullptr;

    printData(firstNode);
}