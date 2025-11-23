#include<iostream>
using namespace std;

class listNode
{
    public:
    int data;
    listNode* next;

    listNode (int val , listNode* nextNode = nullptr) : data(val) , next(nextNode) {}
};

void createLL(int key,listNode*& headNode, listNode*& tailNode)
{
    listNode* newNode = new listNode(key);

    if(!headNode)
        headNode  = newNode;
    else
        tailNode->next = newNode;

    tailNode = newNode;
}

void printLL(listNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

listNode* reverseLL(listNode* headNode)
{
    listNode* currNode = headNode;
    listNode* nextNode = nullptr;
    listNode* prevNode = nullptr;

    while(currNode)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;

        prevNode = currNode;
        currNode = nextNode;
    }
    return prevNode;
}

void deleteLL(listNode*& headNode)
{
    while(headNode)
    {
        listNode* temp = headNode->next;
        delete headNode;
        headNode = temp;
    }
}

int main()
{
    listNode* headNode = nullptr;
    listNode* tailNode = nullptr;

    int n;
    cout<<"Enter the size of LinkedList : ";
    cin>>n;

    // create LL
    for(int i=1;i<=n;i++)
        createLL(i,headNode,tailNode);

    //print LL
    cout<<"Original linkedList is -> ";
        printLL(headNode);

    // reverse LL
    listNode* newHead = reverseLL(headNode);

    //printReverseLL
    cout<<"\nreverse linkedList is -> ";
        printLL(newHead);
    
    // delete LL
        deleteLL(newHead);
    cout<<"\nlinkedList delete succesfully : ";
        
}