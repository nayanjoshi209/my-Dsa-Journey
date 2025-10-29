#include<iostream>
using namespace std;

// 0(n) & 0(n)
class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int val ,ListNode* nextNode = nullptr ) : data(val) , next(nextNode){}
};

void createLL(int key,ListNode*& headNode, ListNode*& tailNode)
{
    ListNode* newNode = new ListNode(key);

    if(!headNode)
        headNode = newNode;
    else
        tailNode->next = newNode;

    tailNode = newNode;
}

void insertAtTail(ListNode*& headNode,int value, ListNode* tailNode)
{
    ListNode* newTail = new ListNode(value);
    tailNode->next = newTail;
}


void printValues(ListNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

void deleteNodes(ListNode*& headNode)
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
    cout<<"Enter the size of linkedList : ";
    cin>>n;
    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);

        if(n>0)
        {
            int value;
            cout<<"Enter the values inserted at tail : ";
            cin>>value;
            insertAtTail(headNode,value,tailNode);
        }
   
    else
    {
        cout<<"\n Enter the valid size of linkedList : ";
        return 0;
    }

    cout<<"linkedList values is : ";
        printValues(headNode);
    
        // delete nodes
        deleteNodes(headNode);
        cout<<"\nDelete nodes successfully : ";
}