#include<iostream>
using namespace std;
int main()
{
    int n; // number of lines \ rows
    cout<<"Enter the number of rows :: Executed ( PERFECT ) only on ODD numbers :  ";
    cin>>n;

         for(int i=1;i<=n/2+1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n/2;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}