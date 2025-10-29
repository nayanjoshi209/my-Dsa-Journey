// C++ program to delete middle of a linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

// Function to delete middle node from linked list
struct Node* deleteMid(struct Node* head) {
    // If the list is empty, return NULL
    if (head == NULL)
        return NULL;

    // If the list has only one node,
    // delete it and return NULL
    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    struct Node* prev = NULL;
    struct Node* slow_ptr = head;
    struct Node* fast_ptr = head;

    // Move the fast pointer 2 nodes ahead
    // and the slow pointer 1 node ahead
    // until fast pointer reaches end of the list
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        fast_ptr = fast_ptr->next->next;  

        // Update prev to hold the previous 
        // slow pointer value
        prev = slow_ptr;  

        slow_ptr = slow_ptr->next;  
    }

    // At this point, slow_ptr points to middle node
    // Bypass the middle node
    prev->next = slow_ptr->next;

    // Delete the middle node
    delete slow_ptr; 

    // Return the head of the modified list
    return head;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a static hardcoded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printList(head);

    // Delete the middle node
    head = deleteMid(head);

    cout << "Linked List after deleting the middle node: ";
    printList(head);

    return 0;
}