// Program to implement basic operations on linked list ~ coded by Hiren
#include <iostream>
#include <vector>
using namespace std;
#define MAX_SIZE 5 

// List template (user defined datatype)
class ListNode {
public:
    int val;
    ListNode* next;

    // Init constructor
    ListNode(int key, ListNode* nextNode = nullptr)
    :
    val(key), next(nextNode) {}
};

class ReverseByVector {
public:
    ListNode* reverseList(ListNode* headNode) {
        if(!headNode || !headNode->next)
            return headNode;

        std::vector<ListNode*> nodes;

        while(headNode) {
            nodes.push_back(headNode);
            headNode = headNode->next;
        }
        
        int n = nodes.size();

        for(int i = n-1; i > 0; --i) {
            nodes[i]->next = nodes[i - 1];
        }
        nodes[0]->next = nullptr;
        
        return nodes[n - 1];
    }
};

// Method to insert node in list - O(1) & O(1)
void insertNode(int key, ListNode*& headNode, ListNode*& tailNode) {
    ListNode* newTail = new ListNode(key);

    if(!headNode) {
        headNode = newTail;
    }
    else {
        tailNode->next = newTail;
    }
    tailNode = newTail;
}

// Method to print list - O(N) & O(1)
void printList(ListNode* headNode) {
    while(headNode) {
        std::cout<<headNode->val<<' ';
        headNode = headNode->next;
    }
}

// Driver code
int main() {
    ListNode* headNode = nullptr;
    ListNode* tailNode = nullptr;

    // Creating, connecting nodes and initializing their data
    for(int i = 1; i <= MAX_SIZE; ++i) {
        insertNode(i, headNode, tailNode);
    }

    // Print list
    std::cout<<"Linked list original order: ";
    printList(headNode);
    
    ReverseByVector obj;
    headNode = obj.reverseList(headNode);

    // Print list
    std::cout<<"\nLinked list reverse order: ";
    printList(headNode);
    
    return 0;
}