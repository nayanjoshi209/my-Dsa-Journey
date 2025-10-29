#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int val , ListNode* nextNode = nullptr) : data(val) , next(nextNode) {}
};

void createLL(int key , ListNode*& headNode , ListNode*& tailNode)
{
    ListNode* newNode = new ListNode(key);

    if(!headNode)
        headNode = newNode;
    else
        tailNode->next = newNode;

    tailNode = newNode;
}

void printValues(ListNode* headNode , ListNode* tailNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';

        if(headNode == tailNode)
            return;

        headNode = headNode->next;
    }
}

void deleteAtHead(ListNode*& headNode,ListNode*& tailNode)
{
    if(headNode == tailNode)
    {
        delete headNode;
        headNode = nullptr;
        return;
    }

    ListNode* temp = headNode->next;
    delete headNode;
    headNode = temp;
    // link as circular
    tailNode->next = headNode;
}

void deleteSpace(ListNode*& headNode , ListNode*& tailNode)
{
    while(headNode)
    {
        ListNode* temp = headNode->next;
        delete headNode;
        headNode = nullptr;
        headNode = temp;
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

    ListNode* newTail = tailNode;
    ListNode* newTail1 = tailNode;
    tailNode->next = headNode;

    // original LL is

    cout<<"\nOriginal LL is : ";
        printValues(headNode,newTail1);

    deleteAtHead(headNode,newTail);

    cout<<"\nOriginal LL is after deletion : ";
        printValues(headNode,newTail1);

    deleteSpace(headNode,newTail1);
}