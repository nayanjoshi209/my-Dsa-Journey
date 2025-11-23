// Program to create a doubly linked list ~ coded by Hiren
#include <iostream>
#define MAX_SIZE 6
using namespace std;

class ListNode { // Node template (user-defined datatype)
public:
    int val;
    ListNode* prev;
    ListNode* next;

    // Init constructor
    ListNode(int val, ListNode* prevNode, ListNode* nextNode) {
        this->val  = val;
        this->prev = prevNode;
        this->next = nextNode;
    }
};

// Method to insert node in list - O(1) & O(1)
void insertNode(int key, ListNode*& headNode, ListNode*& tailNode) {
    ListNode* newTail = new ListNode(key, nullptr, nullptr);

    if(!headNode) {
        headNode = newTail;
    } 
    else {
        tailNode->next = newTail;
        newTail->prev  = tailNode;
    }

    tailNode = newTail;
}

// Method to print list in actual order - O(N) & O(1)
void printListRealOrder(ListNode* headNode) {
    while(headNode) {
        cout << headNode->val << ' ';
        headNode = headNode->next;
    }
}

// Method to print list in reverse order - O(N) & O(N)
void printListReverseOrder(ListNode* headNode) {
    if(headNode) {
        printListReverseOrder(headNode->next);
        cout << headNode->val << ' ';
    }
}

// Method to delete list - O(N) & O(1)
void deleteList(ListNode*& headNode) {
    while(headNode) {
        ListNode* nextNode = headNode->next;
        delete headNode;
        headNode = nextNode;
    }
}

// Driver code
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr);

    ListNode* headNode = nullptr;
    ListNode* tailNode = nullptr;

    for(int i = 1; i <= MAX_SIZE; ++i)
        insertNode(i % 4, headNode, tailNode);
    
    cout << "Linked list original order: ";
    printListRealOrder(headNode);

    cout << "\nLinked list reverse order: ";
    printListReverseOrder(headNode);

    deleteList(headNode);

    return 0;
}