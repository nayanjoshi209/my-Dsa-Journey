#include<iostream>
using namespace std;

int sub(int a ,int b)
{
    return a-b;
}

int main()
{
    int (*add) (int , int) = &sub;
    int sub = add(25,50);
    cout<<sub;

    return 0;
}