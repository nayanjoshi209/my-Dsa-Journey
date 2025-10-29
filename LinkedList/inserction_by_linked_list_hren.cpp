// Program to implement linked list operations ~ coded by Hiren
#include <iostream>
using namespace std;

class Node { // User-defined datatype (Node template)
public:
    int data;
    Node* next;

    Node(int target, Node* address) {
        data = target;
        next = address;
    }
};

class Insertion {
public:
    // Method to insert a node at the beginning of list - O(1) & O(1)
    void insertAtHead(Node*& headNode, int key) {
        Node* keyNode = new Node(key, nullptr);
        keyNode->next = headNode;
        headNode = keyNode;
    }
    
    // Method to insert a node at the end of list - O(N) & O(1)
    void insertAtTail(Node*& headNode, int key) {
        // Edge case: If the list is empty
        if(!headNode) { 
            insertAtHead(headNode, key);
            return;
        }
    
        // Find the last node
        Node* lastNode = headNode;
        while(lastNode->next != nullptr) {
            lastNode = lastNode->next;  
        }
        
        // Insert key after the last node
        Node* keyNode = new Node(key, nullptr);
        lastNode->next = keyNode;
    }

    // Method to insert a node at given position - O(position) & O(1)
    void insertAtPosition(Node*& headNode, int key, int position) {
        // Edge case: If the list is empty
        if(!headNode || position <= 1) {
            insertAtHead(headNode, key);
            return;
        }

        // Find the previous of position node and itself 
        Node* prevNode = nullptr;
        Node* currNode = headNode;
        while(currNode && --position) {
            prevNode = currNode;
            currNode = currNode->next;
        }

        // Insert key after previous of position node
        Node* keyNode  = new Node(key, nullptr);
        prevNode->next = keyNode;
        keyNode->next  = currNode;
    }
};

// Method to delete the list - O(N) & O(1)
void deleteList(Node*& headNode) {
    while(headNode) {
        Node* nextNode = headNode->next;
        delete headNode;
        headNode = nullptr;
        headNode = nextNode;
    }
}

// Method to print the list - O(N) & O(1)
void printList(Node* headNode) {
    while(headNode) {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

// Driver code
int main() {
    Node* headNode = nullptr;

    // Create a linked list
    Insertion obj;
    obj.insertAtPosition(headNode, 10, 1);
    obj.insertAtPosition(headNode, 20, 2);
    obj.insertAtPosition(headNode, 500, 1);
    obj.insertAtPosition(headNode, 1000, 40);
    obj.insertAtPosition(headNode, 10800, -40);
    obj.insertAtPosition(headNode, 58, 4);

    // Print call
    printList(headNode);

    // Deletion call
    deleteList(headNode);

    return 0;
}

/*
    Linked list operations:
    1. ~ Insertion
             : Insertion at start
             : Insertion at end 
             : Insertion at given position   

    2. Deletion
            : Deletion at start
            : Deletion at end
            : Deletion at given position

    3. Search
    4. Update 
*/