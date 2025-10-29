#include<iostream>
using namespace std;

class stack
{
    int* arr;
    int size;
    int top;

    public:

    // constructor call

    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    // push
    void push(int value)
    {
        if(top == size-1)
        {
            cout<<"Stack overFlow : \n";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"pushed "<<arr[top]<< " into the stack \n";
        }
    }
    // pop
    void pop()
    {
        if(top == -1)
        {
            cout<<"stack underFlow : \n";
            // return;
        }
        else
        {
            cout<<"Popped "<<arr[top]<<" From the stack \n "; 
            top--;
        }
    }
    // peak
    int peek()
    {
        if(top == -1)
        {
            cout<<"stack isEmpty : ";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    // Isempty
    bool isEmpty()
    {
            return top==-1;
    }
    // Issize
    int isSize()
    {
        return top+1;
    }
    //
};

int main()
{
    // constructor
    stack s(5);

    s.push(14);
    s.push(12);
    s.push(10);
    s.push(8);
    s.push(6);
    s.push(4);

    s.pop();
    s.pop();

    cout<<s.peek()<<endl;

    cout<<s.isEmpty()<<endl;

    cout<<s.isSize();
}