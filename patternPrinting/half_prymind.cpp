#include<iostream>
using namespace std;
int main()
{
    int n; // num of lines 
    cout<<"Enter the number of lines of star printing : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}