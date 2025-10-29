#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows : ";
    cin>>n;

    cout<<"Enter the number of col : ";
    cin>>m;

    int** arr = new int *[n];

    //Created the 2d array :

    for(int i=0;i<n;i++)
    arr[i] = new int [m];

    // print the random values
    //compailor dependancy its return 0th in all row and column
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // delete the heap memory

    for(int i=0;i<n;i++)
    {
        delete[] arr;  // deleted the inside add of arr[0] index mth array
    }
    delete arr; // delete nth array
}
