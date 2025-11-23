#include<iostream>
using namespace std;

class ListNode
{
    public:

    int data;
    ListNode* next;

    ListNode(int val , ListNode* nextNode = nullptr) : data(val) , next(nextNode) {}
};

void createLL(int key, ListNode*& headNode , ListNode*& tailNode)
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

void insertAtTail(int value , ListNode*& tailNode , ListNode*& headNode)
{
    ListNode* newNode  = new ListNode(value);

    if(!headNode)
    {
        newNode->next = newNode;
        tailNode = newNode;
        headNode = newNode;
        return;
    }

    tailNode->next = newNode;
    tailNode= tailNode->next;
    tailNode->next = headNode;
}

void deleteSpace(ListNode*& headNode)
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
    cout<<"Enter the size of LL : (negative size equal to zero ) : ";
    cin>>n;

    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);
        
    tailNode->next = headNode;

    cout<<"Original LL : ";
    printValues(headNode,tailNode);
    
    int value=0;
    cout<<"\nEnter the value you have insert a node : ";
    cin>>value;
    
    insertAtTail(value,tailNode,headNode);

    cout<<"\nAfter the insertion at end : ";
        printValues(headNode,tailNode);

    cout<<"\nSpace delete succesfully : ";
    deleteSpace(headNode);
}

