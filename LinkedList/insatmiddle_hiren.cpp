#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Init constructor
    Node(int givenData, Node* address) {
        data = givenData;
        next = address;
    }
};

int getListLength(Node* headNode) {
    int count = 0;
    while(headNode != nullptr) {
        count++;
        headNode = headNode->next;
    }
    return count;
}

class Insertion {
public:
    void insertAtHead(Node*& headNode, int key) {
        Node* keyNode = new Node(key, nullptr);
        keyNode->next = headNode;
        headNode = keyNode;
    }

    void insertAtMiddle(Node* headNode, int key) {
        // Edge case: If the list is empty or single noded
        if(headNode == nullptr || headNode->next == nullptr) { 
            insertAtHead(headNode, key);
            return;
        }   

        int listLength  = getListLength(headNode);
        int nodesToSkip = listLength / 2; // Find the middle position

        // Find the previous node of the middle node
        Node* currNode = headNode;
        while(--nodesToSkip) {
            currNode = currNode->next;
        }

        Node* keyNode = new Node(key, nullptr);
        keyNode->next = currNode->next;
        currNode->next = keyNode;
    } 
};

// Driver code
int main() {
    Node* headNode = nullptr;
    int n = 10;

    Insertion obj;
    for(int i = 1; i <= n; ++i)
        obj.insertAtHead(headNode, i*10);

    return 0;
}