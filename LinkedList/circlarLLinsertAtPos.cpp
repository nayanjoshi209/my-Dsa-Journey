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

void insertAtTail(ListNode* newNode, ListNode*& tailNode , ListNode*& headNode,ListNode*& newTail)
{
    if(!headNode)
    {
        newNode->next = newNode;
        tailNode = newNode;
        headNode = newNode;
        return;
    }

    newTail->next = newNode;
    newTail = newTail->next;
    newNode->next = headNode;
}

void insertAtHead(ListNode*& newNode , ListNode*& headNode , ListNode*& tailNode)
{
    if(!headNode)
    {
        newNode->next  = newNode;
        headNode = newNode;
        tailNode = newNode;
        return;
    }

    newNode->next = headNode;
    tailNode->next = newNode;
    headNode = newNode;
    
}

void insertAtPos(ListNode* newNode,ListNode* headNode, ListNode*& tailNode,int pos)
{   
    int count=1;
    while(headNode)
    {
        if(count+1 == pos)
        {
            ListNode* temp = headNode->next;
            headNode->next = newNode;
            newNode->next = temp;
            // tailNode = tailNode->next;
            break;
        }

        count++;
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
    cout<<"Enter the size of LL : (negative size equal to zero ) : ";
    cin>>n;

    if(n <= 0)
    {
        cout<<"LinkedList not be created or no any operation perform : ";
        return 0;
    }        


    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);

    ListNode* newTail = tailNode;
        
    tailNode->next = headNode;

    cout<<"Original LL : ";
    printValues(headNode,newTail);

    int pos;
    cout<<"\nEnter the pos you have insert Node (1th indexing) : ";
    cin>>pos;
    
    int value=0;
    cout<<"\nEnter the value you have insert a node : ";
    cin>>value;

    ListNode* newNode = new ListNode(value);
    
    if(pos == 1 || n == 0)
        insertAtHead(newNode,headNode,tailNode);

    else if(pos == n+1)
        insertAtTail(newNode,headNode,tailNode,newTail);

    else if(pos > 1 && pos <= n)
        insertAtPos(newNode,headNode,newTail,pos);
    else
        cout<<"Enter the valid digite : ";

    cout<<"\nAfter the insertion : ";
        printValues(headNode,newTail);

    cout<<"\nSpace delete succesfully : ";
    deleteSpace(headNode);
}

