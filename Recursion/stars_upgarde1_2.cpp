#include<iostream>
using namespace std;

int fibo(int n)
{
    // Base Conditon
    if(n<=1)
    return 1;
    
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cout<<"Enter the number of fibonachi series : ";
    cin>>n;

    cout<<fibo(n);
}