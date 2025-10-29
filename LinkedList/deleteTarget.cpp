#include<iostream>
#include<cstdlib>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int value , ListNode* nextNode=nullptr) : data(value) , next(nextNode) {}
};

void createLL(int key , ListNode*&  headNode , ListNode*& tailNode)
{
    ListNode* newTail = new ListNode(key);

    if(!headNode)
        headNode = newTail;
    else
        tailNode->next = newTail;

    tailNode = newTail;
}

ListNode* removeListElements(ListNode* headNode,int target)
{
   ListNode* dummyHead = new ListNode(-1);
   ListNode* dummyTail = dummyHead;

    while(headNode)
    {
        ListNode* nextNode = headNode->next;
        if(headNode->data != target)
        {
            dummyTail->next  = headNode;
            dummyTail = dummyTail -> next;
        }
        else {
            delete headNode;
        }
        headNode = nextNode;
    }
    dummyTail->next = nullptr;
    headNode =  dummyHead->next;
    delete dummyHead;
    return headNode;
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
        createLL((i+1)%4,headNode,tailNode);

    cout<<"Original LL : ";
    printValues(headNode);

    int target;
    cout<<"\n\nEnter the value you have not include in LL : ";
    cin>>target;

    ListNode* newHead = removeListElements(headNode,target);

    //printVvalues;
    cout<<"After deletion : ";
    printValues(newHead);

    // deleteSpace
    deleteSpace(newHead);
}