#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next , *prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

    class dequeue
    {
        Node *front,  *rear;
        public:

        dequeue()
        {
            front = rear = NULL;
        }

        // push front
        void push_front(int x)
        {
            if(front==NULL)
            {
                front = rear = new Node(x);
                cout<<"Pushed "<<x<<"in front of Dequeu ";
                return;
            }
            else
            {
                Node *temp = new Node(x);
                temp->next = front;
                front->prev = temp;
                front = temp;
                cout<<"Pushed "<<x<<" in front of Dequeu ";
                return ; 
            }
        }
        // push back
        void push_back(int x)
        {
            if(front==NULL)
            {
                front = rear = new Node(x);
                cout<<"Pushed "<<x<<" in back of Dequeu \n";
                return;
            }
            else
            {
                Node *temp = new Node(x);
                rear->next = rear;
                temp->prev = rear;
                rear = temp;
                cout<<"Pushed "<<x<<"in back of Dequeu \n";
                return ; 
            }
        }
        // pop front
        void pop_front()
        {
            //empty
            if(front==NULL)
            {
                cout<<"Queue underFlow : \n";
                return ;
            }
            else
            {
                Node* temp = front;
                cout<<"Popped"<<temp->data<<" Form front\n";
                front = front->next;
                delete temp;
                //1 Node
                if(front)
                front->prev = NULL;
                // x node
                else
                rear = nullptr;
            }
        }
        // pop back
        void pop_back()
        {
            //empty
            if(front==NULL)
            {
                cout<<"Queue underFlow : \n";
                return ;
            }
            else
            {
                Node* temp = rear;
                cout<<"Popped"<<temp->data<<" Form front\n";
                rear = rear->prev;
                delete temp;
                //1 Node
                if(rear)
                rear->next = NULL;
                // x node
                else
                front = nullptr;
            }
        }
        // start
        int start()
        {
            if(front==nullptr)
            return -1;
            else
            {
                return front->data;
            }
        }
        //end
        int end()
        {
            if(front==nullptr)
            return -1;
            else
            {
                return rear->data;
            }
        }
    
};

int main()
{
    dequeue d;
    d.push_back(5);
    d.push_back(12);
    d.push_back(1232);
    d.push_back(121);
    d.push_back(11);
    d.push_back(1);
    cout<<d.end()<<endl;
    d.push_front(4);
    d.pop_back();
    cout<<d.start()<<endl;
}