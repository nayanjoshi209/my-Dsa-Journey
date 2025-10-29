#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of columns   : ODD NUMBERS ";
    cin>>n;
    int midLeft=n/2+1;
    int midRight=n/2+1;

    for(int row=1;row<=n/2+1;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(col>=midLeft && col<=midRight)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        midLeft--;
        midRight++;
    }
    return 0;
}