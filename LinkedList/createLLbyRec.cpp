#include<iostream>
using namespace std;

class listNode
{
    public:
    int data;
    listNode* next;

    listNode(int value , listNode* nextNode = nullptr) : data(value) , next(nextNode) {}
};

listNode* createLL(int i,int n)
{
    if(i==n)
    return nullptr;

    listNode* nextNode = createLL(i+1,n);
    listNode* headNode = new listNode(i,nextNode);
    return headNode;
}

void printValues(listNode* headNode)
{
    if(headNode) {

        cout<<headNode->data<<' ';
        printValues(headNode->next);
    }
}

int main()
{
    // create LL by rec
        
    listNode* headNode = createLL(0,10);

    //print values
    printValues(headNode);
}