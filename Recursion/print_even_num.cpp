#include<iostream>
using namespace std;

void printEven(int num , int n)
{
    // Base condition
    if(num==n)
    {
        cout<<num<<endl;
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

    if(n%2==1)
    n--;

    printEven(2,n);
}