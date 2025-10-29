#include<iostream>
using namespace std;

int naturalSum(int n)

{
    // Base caske
    if(n==1)
    return 1;

    return n+naturalSum(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number of n : ";
    cin>>n;

    cout<<naturalSum(n);
}