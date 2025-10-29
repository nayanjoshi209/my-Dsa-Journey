#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* Next;
};

    bool linearSearch(Node* headNode)
    {
        int target  = 123;
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

int main()
{
    Node* headNode = new Node;
    Node* SecoundNode = new Node;
    Node* ThirdNode = new Node;
    Node* fourtNode = new Node;
    Node* fiveNode = new Node;
    Node* sixNode  = new Node; 

    // value initlize
    headNode->data = 200;
    headNode->Next = SecoundNode;

    SecoundNode->data = 78;
    headNode->Next = ThirdNode;

    ThirdNode->data = 23;
    ThirdNode->Next = fourtNode;

    fourtNode->data = 54;
    fourtNode->Next = fiveNode;

    fiveNode->data = 5456;
    fiveNode->Next = sixNode;

    sixNode->data = 123;
    sixNode->Next = nullptr;

    //Lin Search
    cout<<linearSearch(headNode);

    // delete created Spaces
    delete headNode;
    delete SecoundNode;
    delete ThirdNode;
    delete fourtNode;
    delete fiveNode;
    delete sixNode;

}