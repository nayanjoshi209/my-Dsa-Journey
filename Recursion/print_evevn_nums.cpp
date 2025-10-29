#include<iostream>
using namespace std;

void printEven(int num , int n)
{
    // Base condition
    if(num>n)
    {
        return ;
    }

    cout<<num<<endl;
    printEven(num+2,n);
}

int main()
{
    int n;
    cout<<"Enter the number till prints numbers (even) ";
    cin>>n;

    printEven(2,n);
}