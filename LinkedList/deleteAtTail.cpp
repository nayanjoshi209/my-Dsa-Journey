#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int value, ListNode* nextNode = nullptr) : data(value) , next(nextNode) {}
};

void createLL(int key,ListNode*& headNode , ListNode*& tailNode)
{
    ListNode* newTail = new ListNode(key);

    if(!headNode)
        headNode = newTail;
    else
        tailNode->next = newTail;

    tailNode = newTail;
}

void deleteAtTail(ListNode*& headNode)
{
    if(!headNode->next) {
        delete headNode;
        headNode = nullptr;
        return;
    }

    ListNode* originalHead = headNode;
    ListNode* prevTail = headNode;
    while(headNode->next)
    {
        prevTail = headNode;
        headNode = headNode->next;
    }
    delete prevTail->next;
    prevTail->next = nullptr;
    headNode = originalHead;
}

void printValues(ListNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

void deleteSpace(ListNode*& headNode)
{
    while(headNode)
    {
        ListNode* prevTail = headNode->next;
        delete headNode;
        headNode = prevTail;
    }
}

int main()
{
    ListNode* headNode = nullptr;
    ListNode* tailNode = nullptr;

    int n;
    cout<<"Enter the size of LL : ";
    cin>>n;

    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);

    if(n>=1)
        deleteAtTail(headNode);
    else
        cout<<"Enter the valid linkedList : ";

    // printValues
    printValues(headNode);

    //deleteSpace
    deleteSpace(headNode);
    cout<<"\nSpace delete successfully : ";
}