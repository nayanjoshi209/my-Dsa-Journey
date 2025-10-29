#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter the number of factorial : ";
    cin>>n;

    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }

    cout<<fact;

    return 0;
}