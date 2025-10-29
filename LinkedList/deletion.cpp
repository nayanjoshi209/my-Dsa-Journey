#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int target, Node* next = nullptr) {
        data = target;
        this->next = next;
    }
};

class Deletion {
public:
    void deleteAtHead(Node*& headNode) {
        if (!headNode) return;
        Node* nextNode = headNode->next;
        delete headNode;
        headNode = nullptr;
        headNode = nextNode;
    }

    void deleteAtTail(Node*& headNode) {
        if (!headNode || !headNode->next) {
            deleteAtHead(headNode);
            return;
        }
        Node* prevNode = nullptr;
        Node* lastNode = headNode;
        while (lastNode->next) {
            prevNode = lastNode;
            lastNode = lastNode->next;
        }
        prevNode->next = nullptr;
        delete lastNode;
        lastNode = nullptr;
    }

    void deleteAtPosition(Node*& headNode, int position) {
        if (!headNode || position <= 1) {
            deleteAtHead(headNode);
            return;
        }
        Node* prevNode = nullptr;
        Node* currNode = headNode;
        while (currNode && --position) {
            prevNode = currNode;
            currNode = currNode->next;
        }
        if (!currNode) return;
        prevNode->next = currNode->next;
        delete currNode;
        currNode = nullptr;
    }
};

void printList(Node* headNode) {
    while (headNode) {
        cout << headNode->data << ' ';
        headNode = headNode->next;
    }
}

void deleteList(Node* headNode) {
    while (headNode) {
        Node* nextNode = headNode->next;
        delete headNode;
        headNode = nullptr;
        headNode = nextNode;
    }
}

int main() {
    Node* headNode = new Node(200);
    Node* secondNode = new Node(78);
    Node* thirdNode = new Node(23);
    Node* fourthNode = new Node(54);
    Node* fifthNode = new Node(5456);
    Node* sixthNode = new Node(123);

    headNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next = fifthNode;
    fifthNode->next = sixthNode;
    sixthNode->next = nullptr;

    Deletion obj2;
    obj2.deleteAtPosition(headNode, 6);
    obj2.deleteAtPosition(headNode, 5);
    obj2.deleteAtPosition(headNode, 4);
    obj2.deleteAtPosition(headNode, 3);
    obj2.deleteAtPosition(headNode, 2);
    obj2.deleteAtPosition(headNode, 1);

    cout << "\nLinked list after deletion: ";
    printList(headNode);

    deleteList(headNode);
    return 0;
}