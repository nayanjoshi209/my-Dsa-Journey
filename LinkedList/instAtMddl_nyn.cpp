#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int givenData, Node* address) : data(givenData), next(address) {}
};

int getLength(Node* headNode) {
    int count = 0;
    while (headNode != nullptr) {
        count++;
        headNode = headNode->next;
    }
    return count;
}

class Insertion {
public:
    void insertAtHead(int key, Node*& headNode) {
        Node* keyNode = new Node(key, headNode);
        headNode = keyNode;
    }

    void insertAtMiddle(int key, Node*& headNode) {
        if (headNode->next == nullptr || headNode == nullptr) {
            insertAtHead(key, headNode);
            return;
        }
        int listLength = getLength(headNode);
        int middlePoint = listLength / 2;
        Node* currNode = headNode;
        while (middlePoint--) {
            currNode = currNode->next;
        }
        Node* keyNode = new Node(key, nullptr);
        keyNode->next = currNode->next;
        currNode->next = keyNode;
    }
};

void printList(Node* headNode) {
    while (headNode) {
        cout << headNode->data << " ";
        headNode = headNode->next;
    }
    cout << endl;
}

void deleteNode(Node*& headNode) {
    while (headNode) {
        Node* tempNode = headNode->next;
        delete headNode;
        headNode = tempNode;
    }
}

int main() {
    Node* headNode = nullptr;
    int n = 10;
    Insertion obj;
    for (int i = 0; i < n; i++) {
        obj.insertAtHead(i * 20, headNode);
    }
    printList(headNode);
    deleteNode(headNode);
    return 0;
}


// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* next;

//     // Init constructor
//     Node(int givenData, Node* address) 
//     {
//         data = givenData;
//         next = address;
//     }
// };

// int getLength(Node* headNode)
// {
//     int count=0;
//     while(headNode!=nullptr)
//     {
//         count++;
//         headNode = headNode->next;
//     }
//     return count;
// }

// class Insertion
// {
//     public:
//     void insertAtHead(int key , Node*& headNode)
//     {
//         Node* keyNode = nullptr;
//         keyNode->next = headNode;
//         headNode = keyNode;
//     }

//     void insertAtMiddle(int key , Node*& headNode)
//     {
//         // edge case
//         Node* keyNode = nullptr;
//         if(headNode->next == nullptr || headNode == nullptr)
//         {
//             insertAtHead(key,headNode);
//             return;
//         }

//         int listLength = getLength(headNode);
//         int middlePoint = listLength/2;

//             Node* currNode = headNode;
//             while(--middlePoint);
//             {
//                 currNode = currNode->next;
//             }

//             Node* keyNode = new Node(key,nullptr);
//             keyNode->next = currNode->next;
//             currNode->next = keyNode;

//     }
// };

// void printList(Node*& headNode)
// {
//     while(headNode)
//     {
//         cout<<headNode->data<<' ';
//         headNode = headNode->next;
//     }
// }

// void deleteNode(Node* headNode)
// {
//     Node* lastNode = nullptr;
//     while(headNode)
//     {
//         lastNode->next = headNode;
//         delete headNode;
//         headNode = lastNode;
//     }
// }

// int main()
// {
//     Node* headNode = nullptr;
//     int n=10;

//     Insertion obj;

//     for(int i=0;i<n;i++)
//     {
//         obj.insertAtHead(i*20 , headNode);
//     }

//     printList(headNode);

//     deleteNode(headNode);

//     return 0;
// }