#include<iostream>
using namespace std;

void getValues(int n, int m, int index)
{
    int arr[n][m];

    if(index==n)
    {
        // print the array
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[n][m]<<' ';
            }
            cout<<endl;
        }
        return ;
    }

    if(index>n)
    {
        arr[n][m]=index+1;
        {
            while(index>m)
            {
                arr[n][m]=index+1;
            }
        }
    }

    getValues(n,m,index+1);
}

int main()
{
    int n;
    cout<<"Enter the row of array : ";
    cin>>n;

    int m;
    cout<<"Enter the col of array : ";
    cin>>m;

    getValues(n,m,0);
}