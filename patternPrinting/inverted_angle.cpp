#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int space=n;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(col>=space)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        space--;
    }
    return 0;

    return 0;
}