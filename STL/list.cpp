#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l;
    l.push_back(213);
    l.push_back(21);
    l.push_back(3);
    l.push_back(9);
    l.push_front(324);
    l.push_back(13);
    l.push_back(23);
    l.push_back(63);

    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;


    // list<int>l;
    l.push_back(213);
    l.push_back(21);
    l.push_back(3);
    l.push_back(9);
    l.push_front(324);
    l.push_back(13);
    l.pop_front();
    l.pop_front();
    l.pop_back();

    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;
}