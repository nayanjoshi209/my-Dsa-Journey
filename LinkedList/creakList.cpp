#include<iostream>
using namespace std;

class listNode
{
    public:
    
    int data;
    listNode* next;
};

void printLL(listNode* headNode)
{
    while(headNode!=nullptr)
    {
         cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
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
    listNode* headNode = new listNode();
    listNode* secondNode = new listNode();
    listNode* thirdNode = new listNode();
    listNode* forthNode = new listNode();
    listNode* fifthNode = new listNode();

    headNode->data = 20;
    headNode->next = secondNode;

    secondNode->data = 30;
    secondNode->next = thirdNode;

    thirdNode->data = 40;
    thirdNode->next = forthNode;

    forthNode->data = 50;
    forthNode->next = fifthNode;

    fifthNode->data = 60;
    fifthNode->next = nullptr;

    printLL(headNode);
    // deleteList
    if(headNode)
        cout<<"yes";

    deleteLL(headNode);
}