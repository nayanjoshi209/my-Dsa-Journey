#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* Next;
};

int getMin(Node* headNode)
{
    int getMinEl=INT_MAX;
    while(headNode)
    {
        getMinEl = min(getMinEl,headNode->data);
        headNode = headNode->Next;
    }
    return getMinEl;
}

int main()
{
    Node* headNode = new Node;
    Node* secoundNode = new Node;
    Node* thirdNode = new Node;
    Node* fourtNode = new Node;

     // Intilization value
    
    headNode->data = 12;
    headNode->Next = secoundNode;

    secoundNode->data = 3432;
    secoundNode->Next = thirdNode;

    thirdNode->data = 256;
    thirdNode->Next = fourtNode;

    fourtNode->data = 24;
    fourtNode->Next = nullptr;

    //get min & also print value 
    cout<<"Min eleamant is : "<<getMin(headNode);

    // delete space

    delete headNode;
    delete secoundNode;
    delete thirdNode;
    delete fourtNode;


}