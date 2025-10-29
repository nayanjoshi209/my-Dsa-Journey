#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row : ";
    cin>>n;
    n=n+2;
    int start=2;    
    int end=n-1;

    for(int row=1;row<=n/2;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(col>=start && col<=end)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        start++;
        end--;
    }
    return 0;
}