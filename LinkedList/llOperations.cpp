#include<iostream>
#include<climits>
using namespace std;

class listNode
{
    public:
    int data;
    listNode* next;
};

void printLL(listNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

void findMaxEl(listNode* headNode , int& maxEl)
{
    while(headNode)
    {
        maxEl = max(maxEl,headNode->data);
        headNode = headNode->next;
    }
}

void findMinEl(listNode* headNode , int& minEl)
{
    while(headNode)
    {
        minEl = min(minEl,headNode->data);
        headNode = headNode->next;
    }
}

void deleteSpace(listNode* headNode)
{
    listNode* temp = headNode->next;
    delete headNode;
    headNode = temp;
}

void reverseLL(listNode* headNode)
{
    if(headNode == nullptr)
    return;

    reverseLL(headNode->next);
    cout<<headNode->data<<' ';
}

int main()
{
    listNode* headNode = new listNode();
    listNode* secondNode = new listNode();
    listNode* thirdNode = new listNode();
    listNode* fourthNode = new listNode();
    listNode* fifthNode = new listNode();


    headNode->data = 15;
    headNode->next = secondNode;

    secondNode->data = 5;
    secondNode->next = thirdNode;

    thirdNode->data = 45;
    thirdNode->next = fourthNode;

    fourthNode->data = 30;
    fourthNode->next = fifthNode;

    fifthNode->data = 300;
    fifthNode->next = nullptr;

    //print LL
    cout<<"created LL is: ";
    printLL(headNode);

    // maxEl
    int maxEl = 0;
    cout<<"\n maxEl of LL is -> ";
    findMaxEl(headNode,maxEl);
    cout<<maxEl;

    //minEl
    int minEl = INT_MAX;
    cout<<"\n minEl of LL is -> ";
    findMinEl(headNode,minEl);
    cout<<minEl;

    // reverse LL
    cout<<"\n print LL in reverse -> ";
    reverseLL(headNode);

    // delete memory in heap
    cout<<"\n LinkList deleted succesfully ";
    deleteSpace(headNode);

}