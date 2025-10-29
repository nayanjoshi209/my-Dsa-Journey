#include<iostream>
using namespace std;
int main()
{
    int n,rem,ans=0,mul=1;
    cout<<"Enter the number of n : ";
    cin>>n;

    while(n>0)
    {
    rem=n%2;
    n=n/2;
    ans=rem*mul+ans;
    mul=mul*10;
    }
    cout<<ans;  
}