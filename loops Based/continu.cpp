#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%5==0) //i==4 other more example 
        continue;
        cout<<i<<" ";
    }

    return 0;
}