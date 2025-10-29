#include<iostream>
using namespace std;

class listNode
{
    public:
    int data;
    listNode* next;

    // listNode(int val , listNode* nextNode)
    // {
    //     this->data = val;
    //     this->next = nextNode;
    // }

    // we can also write this 
    listNode(int value , listNode* nextNode) : data(value) , next(nextNode) {}
};

listNode* insertData(listNode*& headNode, int key, listNode* nextNode)
{
    headNode->data = key;
    headNode->next = nextNode;
    return headNode;
}

void printLL(listNode* headNode)
{
    while(headNode)
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
    listNode* fifthNode  = new listNode(60,nullptr);
    listNode* fourthNode = new listNode(50,fifthNode);
    listNode* thirdNode  = new listNode(40,fourthNode);
    listNode* secondNode = new listNode(30,thirdNode);
    listNode* headNode   = new listNode(20,secondNode);


    // print the LL
    cout<<"Linked List: ";
    printLL(headNode);

    // delete the LL
    deleteLL(headNode);
    cout<<"\nLinked List Is Successfully Deleted";

    return 0;
}