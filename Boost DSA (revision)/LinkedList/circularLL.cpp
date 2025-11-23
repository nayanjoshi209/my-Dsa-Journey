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

    ListNode* newTail = tailNode;
    tailNode->next = headNode;

    ListNode* newHead = headNode;

    cout<<"\nOriginal data is : ";

    while(headNode)
    {
        
        cout<<headNode->data<<' ';
        
        if(headNode == newTail)
            break;
        
        headNode =headNode->next;
    }

    // delete
    cout<<"\nSpace delete succesfully : ";
    deleteSpace(newHead);
}

