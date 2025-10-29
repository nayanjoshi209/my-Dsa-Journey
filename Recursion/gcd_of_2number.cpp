#include<iostream>
using namespace std;

int GCD(int n,int m)
{
    if(m==0)
    return n;

    return GCD(m,n%m);
}

int main()
{
    int a,b;
    cout<<"Enter frist number : ";
    cin>>a;

    cout<<"Enter second number : ";
    cin>>b;

    cout<<GCD(a,b);
}