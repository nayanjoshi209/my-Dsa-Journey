#include<iostream>
using namespace std;
int n=3,m=4;
int arr[3][4];

void inputMatrix(int r , int c)
{
    if(r==n || c ==m)
    return ;

    cin>>arr[r][c];

    inputMatrix(r,c+1);

    if(c==0)
    {
        cout<<'\n';
        inputMatrix(r+1,c);
    }
}

int main()
{
    cout<<"Enter the values of matrix : ";
    int r,c;
    inputMatrix(0,0);

    // printValuse
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}