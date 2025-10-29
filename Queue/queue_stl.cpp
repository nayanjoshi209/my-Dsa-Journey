#include<iostream>
#include<queue>

using namespace std;
int main()
{
    queue<int>q;

    q.push(20);
    q.push(24);
    q.push(265);
    q.push(2878);
    q.push(21);
    q.push(243);

    q.pop();

    cout<<q.back();
    cout<<q.front();

    cout<<q.size();
    cout<<q.empty();

}