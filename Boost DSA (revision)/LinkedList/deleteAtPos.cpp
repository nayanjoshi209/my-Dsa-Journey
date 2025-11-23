#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int val , ListNode* nextNode = nullptr) : data(val) , next(nextNode) {}
};

void createLL(int key , ListNode*& headNode, ListNode*& tailNode)
{
    ListNode* newTail = new ListNode(key);

    if(!headNode)
        headNode = newTail;
    else
        tailNode->next = newTail;

    tailNode = newTail;
}

void deleteAtHead(ListNode*& headNode)
{
    ListNode* temp = headNode->next;
    delete headNode;
    headNode = temp;
}

void deleteAtPos(ListNode*& headNode , int pos)
{
    ListNode* originalHead = headNode;
    ListNode* currNode = headNode;
    int count=2;
    while(headNode)
    {
        if(count == pos)
        {
            ListNode* temp = headNode->next->next;
            delete headNode->next;
            currNode->next = temp;
            headNode = originalHead;
            return;
        }
        count++;
        currNode = headNode->next;
        headNode = headNode->next;
    }
}

void deleteAtTail(ListNode*& headNode)
{
    ListNode* orighinalNode = headNode;
    ListNode* prevNode = headNode;

    while(headNode->next)
    {
        prevNode = headNode;
        headNode = headNode->next;
    }

    delete prevNode->next;
    prevNode->next = nullptr;
    headNode =orighinalNode;
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
    bool userRunApp = true;
    while(userRunApp) {
        system("clear || cls");
        
        ListNode* headNode = nullptr;
        ListNode* tailNode = nullptr;

        int n;
        cout<<"Enter the size of linkedList  : ";
        cin>>n;

        for(int i=1;i<=n;i++)
            createLL(i,headNode,tailNode);

        int pos;
        cout<<"Enter the Postition you have delete : (1 INDEXING) : ";
        cin>>pos;

        if(pos == 1)
            deleteAtHead(headNode);
        else if(pos >= 2 && pos <= n-1)
            deleteAtPos(headNode,pos);
        else if(pos == n)
            deleteAtTail(headNode);
        else
            cout<<"\nEnter the valid postion : ";

        //print values;
        printValues(headNode);

        //spcae delete
        deleteSpace(headNode);
        cout<<"\nLL delete successfully : ";

        char userChoice;
        cout<<"\nPress 'R' to restart app else off app : ";
        cin>>userChoice;

        if(userChoice != 'R')
            userRunApp = false;
    }

}