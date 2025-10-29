#include<iostream>
#include<thread>
#include<chrono>
#include<cstdlib>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;

    ListNode(int val , ListNode* nextNode = nullptr) : data(val) , next(nextNode) {}
};

void createLL(int key , ListNode*& headNode, ListNode*& tailNode)
{
    ListNode* newTail = new ListNode(key);

    if(!headNode)
        headNode = newTail;
    else
        tailNode->next = newTail;

    tailNode = newTail;
}

void printLL(ListNode* headNode)
{
    while(headNode)
    {
        cout<<headNode->data<<' ';
        headNode = headNode->next;
    }
}

void deleteLL(ListNode*& headNode)
{
    while(headNode)
    {
        ListNode* temp = headNode->next;
        delete headNode;
        headNode = temp;
    }
}

ListNode* insertAtHead(ListNode* headNode , int key)
{
    ListNode* newHead = new ListNode(key);
    newHead->next = headNode;
    return newHead;
}

int main()
{
    int testCase;
    cout<<"\nEnter the testCase which time running code : ";
    cin>>testCase;

    while(testCase--)
    {
        //console clear
        system("cls");

        ListNode* headNode = nullptr;
        ListNode* tailNode = nullptr;

        cout<<"\nenter the size of linked list -> ";
        int n;
        cin>>n;

        for(int i=1;i<=n;i++)
            createLL(i,headNode,tailNode);

        if(n<0)
        {
            cout<<"linkedList value not inserted :\n";
        }
        else
        {
            int value;
            cout<<"Enter the value you have insert at head : ";
            cin>>value;
            
            //insertAtHead
            ListNode* newHead = insertAtHead(headNode,value);

            // print the latest linkedList
            printLL(newHead);

            // delete the space
            deleteLL(newHead);
            cout<<"\n";
        }
        
        cout<<"Application will restart in 3 second : ";
        this_thread::sleep_for(chrono::seconds(3));
    }
}