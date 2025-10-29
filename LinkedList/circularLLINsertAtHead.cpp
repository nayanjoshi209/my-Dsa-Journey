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
    cout<<"Enter the size of LL : ";
    cin>>n;

    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);

    ListNode* newHead = headNode;
    ListNode* newTail = tailNode;

    cout<<"Original LL : ";
        printValues(newHead,newTail);

    int value=0;
    cout<<"\nEnter the value you have insert a node : ";
    cin>>value;

    if(n <= 0)
    {
        ListNode* newNode = new ListNode(value,nullptr);   
        cout<<"\nAfter the insertion of data at head : "<<newNode->data;
        headNode = newNode;
        headNode->next = headNode;
        
        cout<<"\nSpace delete succesfully : ";
        deleteSpace(newNode);
        return 0;
    }

    ListNode* newNode = new ListNode(value);
    newNode->next  = headNode;
    tailNode->next = newNode;

    ListNode* newHead2 = newNode;
    cout<<"\nAfter the insertion : ";
        printValues(newNode,newTail);

    cout<<"\nSpace delete succesfully : ";
    deleteSpace(newHead2);
}

