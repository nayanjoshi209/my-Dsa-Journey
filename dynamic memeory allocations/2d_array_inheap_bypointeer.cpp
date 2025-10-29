#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows : ";
    cin>>n;

    cout<<"Enter the number of col : ";
    cin>>m;

    int** arr = new int*[n];

    //created new 2nd array
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[m];
    }

    // inserted value of arrry (new created)
    cout<<"inserts the values : \n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    // print created values

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // deleted the created memory in heap

    for(int i=0;i<n;i++)
    {
        delete[] arr;
    }

    delete arr;

    return 0;

}