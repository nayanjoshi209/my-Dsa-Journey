//  #include<iostream>
//  using namespace std;
//  class Node
//  {
//     public:
//     int data;
//     Node* next;

//     Node(int val )
//     {
//         data = val;
//         next = nullptr;
//     }
//  };

// class Inserction
// { 
//     // if the list is empty or not
//     void insertAtHead(int key, Node* headNode)
//     {
//         Node* tempNode = new Node(key);
//         // if(headNode->next == nullptr)
//         tempNode->next = headNode;
//         headNode = tempNode;
//     }
// };

//     void printList(Node* headNode)
//     {
//         while(headNode);
//         {
//             cout<<headNode->data<<' ';
//             headNode = headNode->next;
//         }
//     }

//     void deleteNode(Node* headNode);
//     {
//         while(headNode)
//         {
//             Node* tempNode = headNode->next;
//             delete haedNode;
//             headNode = tempNode;
//         }
//     }
//  int main()
//  {
//     Inserction obj;
//     Node* headNode = nullptr;

//     obj.insertAtHead(1,headNode);
//     obj.insertAtHead(2,headNode);
//     obj.insertAtHead(3,headNode);
//     obj.insertAtHead(4,headNode);
//     obj.insertAtHead(5,headNode);

//  // insert Node at perticular postion
//     int x =3; //postion(middle)
//     int value =321; // value

//     Node* temp = headNode;
//     x--;

//     while(x--)
//     {
//         temp = temp-> next;
//     }

//     // get the position of middle
//     Node* temp2 = new Node(value);
//     temp2->next = temp->next;
//     temp->next = temp2;

//     // print list
//     printList(headNode);

//     //delete Node
//     deleteNode(headNode);
// }