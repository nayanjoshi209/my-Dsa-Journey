#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers of rows : ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}