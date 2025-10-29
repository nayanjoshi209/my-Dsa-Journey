#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int>q;
    q.push(34);
    q.push(32);
    q.push(4);
    q.push(2);
    q.push(43);
    q.push(44);
    q.push(4132);

    int n = q.size();

    while(n--)
    {
        cout<<q.front()<<' ';
        q.push(q.front());
        q.pop();
    }

    cout<<endl;
    cout<<q.size();
}