// ~ coded by Hiren
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
};

// Method to find the maximum element in list - O(N) & O(1)
int getMaxElement(Node* headNode) {
    int maxElement = INT_MIN;
    while(headNode) {
        maxElement = max(maxElement, headNode->val);
        headNode = headNode->next;
    }
    return maxElement;
}

// Method to print the linked list - O(N) & O(1)
void printList(Node* headNode) {
    while(headNode) {
        cout<<headNode->val<<' ';
        headNode = headNode->next;
    }
}

// Driver code
int main() {
    // Creating nodes of linked list
    Node* headNode   = new Node;
    Node* secondNode = new Node;
    Node* thirdNode  = new Node;

    // Connecting and initializing data
    headNode->val   = 10; headNode->next   = secondNode;
    secondNode->val = 20; secondNode->next = thirdNode;
    thirdNode->val  = 30; thirdNode->next  = nullptr;

    // Print call
    cout<<"Linked list: ";
    printList(headNode);

    // Call to find maximum element
    cout<<"\nThe maximum element is: "<<getMaxElement(headNode);

    // Deleting nodes of linked list
    delete headNode;
    delete secondNode;
    delete thirdNode;

    return 0;
}