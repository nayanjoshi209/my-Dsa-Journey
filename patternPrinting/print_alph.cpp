    // cin>>n;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers of rows : ";
    cin>>n;

    for(char row=1;row<=n;row++) 
    {       
        char name = 'a'+row-1;           // small to cap both
        for(char col=1;col<=n;col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}