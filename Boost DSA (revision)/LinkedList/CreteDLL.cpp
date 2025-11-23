#include<iostream>
using namespace std;

class listNode{
    public:
    int data;
    listNode* next;
    listNode* prev;

    listNode(int val,listNode* nextNode,listNode* prevNode)
    {
        this->data = val;
        this->next = nextNode;
        this->prev = prevNode;
    }
};

void createLL(int key , listNode*& headNode,listNode*& tailNode)
{
    listNode* newNode = new listNode(key,nullptr,nullptr);

    if(!headNode)
        headNode = newNode;
    else    
    {
        tailNode->next = newNode;
        newNode->prev = tailNode;
    }
    tailNode = newNode;
}

void printData(listNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

void deleteSpace(listNode*& headNode)
{
    while(headNode)
    {
        listNode* newtNode = headNode->next;
        delete headNode;
        headNode = newtNode;
    }
}

int main()
{
    listNode* headNode = nullptr;
    listNode* tailNode = nullptr;

    for(int i=0;i<=5;i++)
        createLL(i,headNode,tailNode);

    printData(headNode);

    deleteSpace(headNode);
}