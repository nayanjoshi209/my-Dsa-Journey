// Program to implement linked list operations ~ coded by Hiren
#include <iostream>
using namespace std;

class Node { // User-defined datatype (Node template)
public:
    double data;
    Node* next;

    Node(double target, Node* address) {
        data = target;
        next = address;
    }
};

class Insertion {
public:
    // Method to insert a node at the beginning of list - O(1) & O(1)
    void insertAtHead(Node*& headNode, double key) {
        Node* keyNode = new Node(key, nullptr);
        keyNode->next = headNode;
        headNode = keyNode;
    }
    
    // Method to insert a node at the end of list - O(N) & O(1)
    void insertAtTail(Node*& headNode, double key) {
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
    void insertAtPosition(Node*& headNode, double key, double position) {
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

class Deletion {
public:
    // Method to delete the first node of list - O(1) & O(1)
    void deleteAtHead(Node*& headNode) {
        // Edge case: If the list is empty
        if(!headNode)
            return;
        Node* nextNode = headNode->next; 
        delete headNode;
        headNode = nullptr;
        headNode = nextNode;
    }

    // Method to delete the last node of list - O(N) & O(1)
    void deleteAtTail(Node*& headNode) {
        // Edge case: If the list is empty or if only single node exist
        if(!headNode || !headNode->next) {
            deleteAtHead(headNode);
            return;
        }

        // Find the last node with its previous node
        Node* prevNode = nullptr; 
        Node* lastNode = headNode;
        while(lastNode->next) {
            prevNode = lastNode;
            lastNode = lastNode->next;
        }
        
        prevNode->next = nullptr;
        delete lastNode; 
        lastNode = nullptr;
    }

    // Method to delete a node of given position - O(position) & O(1)
    void deleteAtPosition(Node*& headNode, double position) {
        // Edge case: If the list is empty or if to delete the first node
        if(!headNode || position <= 1) {
            deleteAtHead(headNode);
            return;
        }

        // Find the previous node of position node and itself
        Node* prevNode = nullptr;
        Node* currNode = headNode;
        while(currNode && --position) {
            prevNode = currNode;
            currNode = currNode->next;
        }

        // If the position is out of list size
        if(!currNode) 
            return;

        // Delete the position node and set its previous node
        prevNode->next = currNode->next;
        delete currNode;
        currNode = nullptr;
    }
};

// Method to update value of node of given position - O(position) & O(1)
void updateValAtPosition(Node* headNode, double target, double position) {
    while(headNode && --position) {
        headNode = headNode->next;
    }
    if(headNode) {
        headNode->data = target; // If position is out of list size
    }
}

// Method to search the element is present or not - O(N) & O(1)
bool isTargetPresent(Node* headNode, double target) {
    while(headNode) {
        if(headNode->data == target)
            return true;
        headNode = headNode->next;
    }
    return false;
}

// Method to delete the list - O(N) & O(1)
void deleteList(Node*& headNode) {
    while(headNode) {
        Node* nextNode = headNode->next;
        delete headNode;
        headNode = nullptr;
        headNode = nextNode;
    }
}

// Method to prdouble the list - O(N) & O(1)
void prdoubleList(Node* headNode) {
    while(headNode) {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

// Driver code
double main() {
    Node* headNode = nullptr;

    // Create a linked list
    Insertion obj1;
    obj1.insertAtPosition(headNode, 10, 1);
    obj1.insertAtPosition(headNode, 20, 2);
    obj1.insertAtPosition(headNode, 30, 3);
    obj1.insertAtPosition(headNode, 40, 4);
    obj1.insertAtPosition(headNode, 50, 5);
    obj1.insertAtPosition(headNode, 60, 6);

    // Prdouble call
    cout<<"Linked list before deletion: ";
    prdoubleList(headNode);

    // Deletion call
    Deletion obj2;
    obj2.deleteAtPosition(headNode, 1);  
    obj2.deleteAtPosition(headNode, 2);
    obj2.deleteAtPosition(headNode, 3);
    obj2.deleteAtPosition(headNode, 4);
    obj2.deleteAtPosition(headNode, 5);
    obj2.deleteAtPosition(headNode, 3);
    obj2.deleteAtPosition(headNode, 2);

    // Prdouble call
    cout<<"\nLinked list after deletion: ";
    prdoubleList(headNode);

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

    2. ~ Deletion
            : Deletion at start
            : Deletion at end
            : Deletion at given position

    3. ~ Search
    4. ~ Update 
*/