#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int val , ListNode* nextNode = nullptr) : data(val) , next(nextNode) {}
};

void createLL(int key,ListNode*& headNode, ListNode*& tailNode)
{
    ListNode* newTail = new ListNode(key);

    if(!headNode)
        headNode = newTail;
    else
        tailNode->next = newTail;

    tailNode = newTail;
}

void insertAtHead(ListNode*& headNode)
{
    int value;
    cout<<"\nEnter the value you have added ";
    cin>>value;

    ListNode* newNode = new ListNode(value);
    newNode->next = headNode;
    headNode = newNode;
}

void insertAtPos(ListNode*& headNode,int pos)
{
    int value;
    cout<<"\nEnter the value you have added ";
    cin>>value;
    ListNode* newNode = new ListNode(value);

    ListNode* newHead = headNode;

    if(pos == 1)
    {
        ListNode* temp = headNode->next;
        headNode->next = newNode;
        newNode->next = temp;
        headNode = newHead;
        return;
    }

    int count=1;
    while(headNode)
    {

        headNode = headNode->next;
        if(count==pos-1)
        {
            ListNode* temp = headNode->next;
            headNode->next = newNode;
            newNode->next = temp;
            headNode = newHead;
            break;
        }
        count++;
    }
}

void insertAtTail(ListNode*& headNode,ListNode* tailNode)
{
    int value;
    cout<<"\nEnter the value you have added ";
    cin>>value;

    ListNode* newNode = new ListNode(value);
    tailNode->next = newNode;
}

void printValues(ListNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode=headNode->next;
    }
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
    ListNode* headNode = nullptr;
    ListNode* tailNode = nullptr;

    int n;
    cout<<"Enter the size of LL : ";
    cin>>n;

    // create LL
    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);

    int pos;
    cout<<"\nEnter the position you are insert Value : (FOLLOWED 0 INDEX) : ";
    cin>>pos;
    // insert At Head
    if(pos==0)
        insertAtHead(headNode);
    // insert At Pos
    else if(pos >=1 && pos <= n-1)
        insertAtPos(headNode,pos);
    // insert At Tail
    else if(pos == n)
        insertAtTail(headNode,tailNode);
    else
        {
            cout<<"\nEnter the valid position : ";
            return 0;
        }

    //print values
    cout<<"\nValues after the insert values at given position : ";
        printValues(headNode);

    //delete space
        deleteSpace(headNode);
    cout<<"\nLinkedList delete successufly : ";

    return 0;
}   