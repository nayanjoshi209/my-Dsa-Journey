#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    while(n>9)
    {
        int rem=0,ans;
         while(n!=0)
         {
            rem=n%10;
            n/=10;
            ans=ans+rem;
         }   
         n=ans;
    }
    cout<<n;

    return 0;
}