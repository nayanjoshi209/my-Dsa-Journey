#include<iostream>
using namespace std;
int main()
{
    int n,ans=0,mul=1,rem;
    cout<<"Enter the binary form : ";
    cin>>n;

    while(n>0)
    {
    rem=n%10;
    n/=10;
    ans=mul*rem+ans;
    mul=mul*2;
    }
    cout<<ans;
    return 0;
}