bool prime(int n)           // Function declre
{
    if(n<2)                 // Functions define
    return 0;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
};

int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
};

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of A :";
    cin>>a;
    cout<<"Enter the value of B :";
    cin>>b;

    cout<<prime(a)<<endl;
    cout<<fact(a)<<endl;

    cout<<prime(b)<<endl;
    cout<<fact(b)<<endl;

    cout<<prime(a+b)<<endl;
    cout<<fact(a+b)<<endl;
}