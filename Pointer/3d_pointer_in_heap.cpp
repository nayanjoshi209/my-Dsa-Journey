#include<iostream>
using namespace std;
int main()
{
    int n=3,m=2,l=3;
    //creating 3d array in heap
    int*** arr = new int**[n];
    
    //3d array
    for(int i=0;i<n;i++)
    {
        arr[i]= new int*[m];
    

        for(int j=0;j<m;j++)
        {
            arr[i][j] = new int[i];
        }
    }

    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<l;k++)
            {
                arr[i][j][k]= count++;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<l;k++)
            {
                cout<<arr[i][j][k]<<' ';
            }
            if(j<m-1)cout<<"|";
        }
        cout<<endl;
    }

    //deleting array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            delete[] arr[i][j];
            arr[i][j] = nullptr;
        }
    }

    delete[] arr;

    arr  = nullptr;
    
}