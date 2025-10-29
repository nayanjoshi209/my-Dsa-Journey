#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows  : ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        //Print space 
        for(int col=1;col<=n-row;col++)
        cout<<"  ";

        //print row
        for(int col=1;col<=row;col++)
        cout<<col<<" ";

        //print row form --
        for(int col=row-1;col>=1;col--)
        cout<<col<<" ";

        cout<<endl; 
    }
    return 0;
}