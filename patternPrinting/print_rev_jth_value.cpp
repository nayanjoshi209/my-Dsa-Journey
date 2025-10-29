#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers of rows : ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int col=n;col>=1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}