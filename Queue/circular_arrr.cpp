#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front,rear,size;    

    public:
    
    //cunstructor
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;

    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear+1)%size == front;
    }

    void push(int x)
    {
        // empty
        if(isEmpty())
        {
            front=rear=0;
            arr[0] = x;
            return;
        }
        //full
        else if(isFull())
        {
            cout<<"Queue overFlow/n";
            return;
        }
        //ensert
        else
        {
            rear = (rear+1);
            arr[rear] = x;
        }
    }
    // pop elemant(starting)

    void pop()
    {
        // empty
        if(isEmpty())
        {
            cout<<"Queue underFlow \n";
            return ;
        }
        //pop 
        else
        {
            if(front==rear)
            front = rear = -1;
            else
            front = (front+1)%size;
        }
    }

    int start()
    {
        if(isEmpty())
        {
            cout<<"Queue if empty \n";
            return -1;
        }
        else
        return arr[front];
    }


};

int main()
{
    Queue Q(5);
    Q.push(5);
    Q.push(43);
    Q.push(4);
    Q.push(87);
    Q.push(3);

    Q.pop();

    cout<<Q.start();
}