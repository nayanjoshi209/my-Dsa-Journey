#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int val , ListNode* nextNode= nullptr) : data(val) , next(nextNode) {}
};

void createLL(int key, ListNode*& headNode, ListNode*&  tailNode)
{
    ListNode* newTail = new ListNode(key);

    if(!headNode)
        headNode = newTail;
    else
        tailNode->next = newTail;

    tailNode = newTail;
}

int main()
{
    ListNode* headNode = nullptr;
    ListNode* tailNode  = nullptr;

    // crete LL
    int n;
    cout<<"Enter the size of LL : ";
    cin>>n;
    
    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);

    int value;
    cout<<"Enter the values you have find in LL : (0 BASE INDEXING)";
    cin>>value;

    if(value >= 1 && value <= n)
        cout<<"\nindex of value in linkedList is in: "<<value-1<<" nodes";
    else
        cout<<"\nThis value does not belong is linkedList : ";

    return 0;
}