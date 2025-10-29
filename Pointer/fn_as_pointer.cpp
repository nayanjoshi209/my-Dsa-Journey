#include<iostream>
using namespace std;

int sum(int a , int b)
{
    return a+b;
}

int main()
{
    int (*ptr)(int ,int) = &sum;
 // auto
    int sum = ptr(15,29);
    cout<<sum;

    return 0;
}