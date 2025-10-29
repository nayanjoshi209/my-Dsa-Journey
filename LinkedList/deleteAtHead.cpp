#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int value , ListNode* nextNode = nullptr) : data(value) , next(nextNode) {}
};

void createLL(int key,ListNode*& headNode,ListNode*& tailNode)
{
    ListNode* newNode = new ListNode(key);

    if(!headNode)
        headNode = newNode;
    else
        tailNode->next = newNode;

    tailNode = newNode;
}

void deleteHead(ListNode*& headNode)
{
    if(headNode->next)
    {
        ListNode* temp = headNode->next;
        delete headNode;
        headNode = temp;
    }
    else
    {
        delete headNode;
        headNode = nullptr;
    }
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

    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);

    if(n>=1)
        deleteHead(headNode);
    else
        cout<<"\nLinkedList size will be greater then or equal to one : \n";

    // printvalues
    printValues(headNode);

    //deleteSpace
    deleteSpace(headNode);
    cout<<"\nSpace delete successfully : ";
    
}