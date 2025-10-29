#include<iostream>
using namespace std;

int n=3,m=3;
int arr[3][3];

void rvrsEachCol(int r , int c)
{
    if(r==n || c==m)
    return ;

    cin>>arr[r][c];

    rvrsEachCol(r,c+1);

    if(c==0)
    {
        cout<<'\n';
        rvrsEachCol(r+1,c);
    }
}

int main()
{
    cout<<"Enter the yours array : ";

    rvrsEachCol(0,0);

    cout<<"values of matixes is : \n";
    for(int i=n;i>0;i--)
    {
        for(int j=m;j>0;j--)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}