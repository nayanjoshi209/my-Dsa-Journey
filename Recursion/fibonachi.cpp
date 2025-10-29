#include<iostream>
using namespace std;

int factorial(int n)
{
    //Base Condition
    if(n==0)
    {
        return 1;
    }

    return n*factorial(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<factorial(n);
}