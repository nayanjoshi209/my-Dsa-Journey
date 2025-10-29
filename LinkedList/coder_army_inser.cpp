#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* createLinkedList(int arr[] , int index , int size)
{
    if(index==size)
    return;

    Node* temp;
    temp->next = createLinkedList(arr, index+1 , 5);
    return temp; 
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int arr[] = {132, 43, 67, 89, 43};

    head = createLinkedList(arr , 0 ,5); 
    // int size = sizeof(arr)/sizeof(arr[0]);

    // Insert value at the end
    for(int i = 0; i < 5; i++) {
        if(head == nullptr) {
            head = new Node(arr[i]);
            tail = head;
        } else {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    // insert Node at perticular postion
    int x =3; //postion
    int value =321;

    Node* temp = head;
    x--;

    while(x--)
    {
        temp = temp-> next;
    }

    // get the position of middle
    Node* temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print data
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
