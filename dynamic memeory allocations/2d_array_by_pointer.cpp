#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;
    
    cout<<"Enter the number of col : ";
    cin>>m;

    int **ptr = new int *[n];

    // created 2d array
    for(int i=0;i<n;i++)
    {
        ptr[i] = new int[m];
    }
    // insert values of array
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>ptr[i][j];

    //print values of aarray
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<ptr[i][j]<<" ";
        cout<<endl;
    }

    // relese the memory , heap me
    
    for(int i=0;i<n;i++)
    delete[] ptr[i];

    delete[] ptr;
}