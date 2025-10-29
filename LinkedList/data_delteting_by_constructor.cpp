#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* Next;

    // Default constructor
    Node() {}

    // Perametrized constrictor
    Node(int target , Node* address)
    {
        data = target;
        Next = address;
    }
};

void printList(Node* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->Next;
    }
}

bool linearSearch(Node* headNode)
{
    int target = 432;
    while(headNode)
    {
        if(headNode->data == target)
        {
            return 1;
        }
        headNode = headNode->Next;
    }
    return 0;
}

int getMaxEl(Node* headNode)
{
    int maxEl = INT_MIN;
    while(headNode)
    {
        maxEl = max(maxEl , headNode->data);
        headNode = headNode->Next;
    }
    return maxEl;
}

int getMinEl(Node* headNode)
{
    int minEl = INT_MAX;
    while(headNode)
    {
        minEl = min(minEl,headNode->data);
        headNode = headNode->Next;
    }
    return minEl;
}

void deleteList(Node*& headNode)
{
    while(headNode)
    {
        Node* nextNode = headNode->Next;
        delete headNode;
        headNode = nullptr;
        headNode = nextNode;
    }
}

int main()
{ 
    // Initize value by constructor
    Node* sixNode  = new Node(123 , nullptr); 
    Node* fiveNode  = new Node(5456 , sixNode); 
    Node* fourtNode  = new Node(54 , fiveNode); 
    Node* thirdNode  = new Node(23 , fourtNode); 
    Node* secoundNode  = new Node(78 , thirdNode); 
    Node* headNode  = new Node(200 , secoundNode); 
    

    // // value initlize
    // headNode->data = 200;
    // headNode->Next = secoundNode;

    // secoundNode->data = 78;
    // secoundNode->Next = thirdNode;

    // thirdNode->data = 23;
    // thirdNode->Next = fourtNode;

    // fourtNode->data = 54;
    // fourtNode->Next = fiveNode;

    // fiveNode->data = 5456;
    // fiveNode->Next = sixNode;

    // sixNode->data = 123;
    // sixNode->Next = nullptr;

    // Print All elemant
    cout<<"Linked List value is : ";
    printList(headNode);

    // search el& also also present or not
    cout<<endl<<linearSearch(headNode)<<endl;

    // getMaxEl
    cout<<"Maximum El is this linked List is : "<<getMaxEl(headNode)<<endl;

    // getMinEl
    cout<<"Minimum El is this linked List is : "<<getMinEl(headNode);

    // delete all created Node
    // delete headNode;
    // delete secoundNode;
    // delete thirdNode;
    // delete fourtNode;
    // delete fiveNode;
    // delete sixNode;

    deleteList(headNode);

}