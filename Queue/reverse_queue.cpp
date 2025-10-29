 // reverse queue with the help of stack
#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;

    // Pushing elements into the queue
    q.push(34);
    q.push(32);
    q.push(4);
    q.push(2);
    q.push(43);
    q.push(44);
    q.push(4132);

    // Move all elements from queue to stack to reverse the order
    while (!q.empty())  // Change the condition here
    {
        s.push(q.front());
        q.pop();
    }

    // Move elements back from stack to queue
    while (!s.empty())  // Change the condition here
    {
        q.push(s.top());
        s.pop();
    }

    // Print reversed queue
    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}

// --- METHOD 2--

// #include<iostream>
// #include<queue>
// #include<stack>

// // reverse queue using the stack

// using namespace std;

// int main()
// {
//     stack<int>s;
//     queue<int>q;
//     q.push(34);
//     q.push(32);
//     q.push(4);
//     q.push(2);
//     q.push(43);
//     q.push(44);
//     q.push(4132);

//     while(!q.empty())
//     {
//         s.push(q.front());
//         q.pop();
//     }

//     while(!s.empty())
//     {
//         q.push(s.top());
//         s.pop();
//     }

//     int n = q.size();

//     while(n--)
//     {
//         cout<<q.front()<<' ';
//         q.pop();
//     }


// }
