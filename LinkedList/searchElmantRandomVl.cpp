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

int findValues(ListNode* headNode,int value)
{
    int count=0;
    while(headNode)
    {
        if(headNode->data == value)
        return count;

        count++;
        headNode = headNode->next;
    }
    return INT_MIN;
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
        createLL(i*4+2-1,headNode,tailNode);

    int value;
    cout<<"Enter the values you have find in LL (0 BASE INDEXING) : ";
    cin>>value;

    //find values
    int index = INT_MIN;
    index = findValues(headNode,value);

    if(index != INT_MIN)
        cout<<"\nNode of LL value is "<<index;
    else
        cout<<"\nValue not present in LL : ";

    return 0;

}   