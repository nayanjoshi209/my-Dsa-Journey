#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int target, Node* address = nullptr) {
        data = target;
        next = address;
    }
};

class Insertion {
public:
    // Method to insert a node at the beginning
    void insertAtHead(Node*& headNode, int key) {
        Node* keyNode = new Node(key, headNode);
        headNode = keyNode;
    }

    // Method to insert a node at the end
    void insertAtTail(Node*& headNode, int key) {
        if (!headNode) {
            insertAtHead(headNode, key);
            return;
        }
        Node* lastNode = headNode;
        while (lastNode->next != nullptr) {
            lastNode = lastNode->next;
        }
        Node* keyNode = new Node(key, nullptr);
        lastNode->next = keyNode;
    }

    // Method to insert a node at a given position
    void insertAtPosition(Node*& headNode, int key, int position) {
        if (!headNode || position <= 1) {
            insertAtHead(headNode, key);
            return;
        }
        Node* prevNode = nullptr;
        Node* currNode = headNode;
        while (currNode && --position) {
            prevNode = currNode;
            currNode = currNode->next;
        }
        Node* keyNode = new Node(key, currNode);
        prevNode->next = keyNode;
    }
};

// Function to print the linked list
void printList(Node* headNode) {
    while (headNode) {
        cout << headNode->data << ' ';
        headNode = headNode->next;
    }
}

int main() {
    Node* headNode = nullptr;

    Insertion obj1;
    obj1.insertAtPosition(headNode, 10, 1);
    obj1.insertAtPosition(headNode, 20, 2);
    obj1.insertAtPosition(headNode, 30, 3);
    obj1.insertAtPosition(headNode, 40, 4);
    obj1.insertAtPosition(headNode, 50, 5);
    obj1.insertAtPosition(headNode, 60, 6);

    cout << "Linked List after insertion: ";
    printList(headNode);

    return 0;
}