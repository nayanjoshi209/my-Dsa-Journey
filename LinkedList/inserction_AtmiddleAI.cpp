#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};  

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Length find karne ki function
    int findLength() {
        Node* temp = head;
        int length = 0;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        return length;
    }

    // Middle mein insertion karne ki function
    void insertAtMiddle(int data) {
        int length = findLength();
        int middle = length / 2;

        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            return;
        }

        if (middle == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < middle - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Linked list print karne ki function
    void printList() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout<<endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtMiddle(10);
    list.insertAtMiddle(20);
    list.insertAtMiddle(30);
    list.insertAtMiddle(40);
    list.insertAtMiddle(50);

    list.printList();  // Output: 10 20 30 40 50

    return 0;
}