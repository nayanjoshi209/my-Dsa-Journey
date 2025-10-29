#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* Next;
};

int printMaxEl(Node* headNode)
{
    int maxEl=0;
    while(headNode)
    {
        maxEl = max(maxEl, headNode->data);
        headNode = headNode->Next;
    }
    return maxEl;
}

int main()
{
    Node* headNode = new Node;
    Node* secoundNode = new Node;
    Node* thirdNode = new Node;

    // Initize data
    headNode->data = 10;
    headNode->Next  = secoundNode;

    secoundNode->data = 30;
    secoundNode->Next = thirdNode;

    thirdNode->data = 15;
    thirdNode->Next = nullptr;

    // print data
    cout<<"Maxmimum data is : "<<printMaxEl(headNode);

    // delete created heap memory
    delete headNode;
    delete secoundNode;
    delete thirdNode;
}