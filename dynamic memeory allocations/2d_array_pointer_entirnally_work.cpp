#include<iostream>
using namespace std;

//int **ptr = new int*[n]; -- internally working
 int* arr_rows[2];
    int** creat1DRows(int size)
    {
        return arr_rows;
    }

        //ptr[i] = new int[m]  -- internally working
    int arr_col[3]={0};
     int* create1DCols(int size)
    {
        return arr_col;
    }

int main()
{
    int n=2,m=3;

    int** matrix = creat1DRows(n);

    for(int i=0;i<n;i++)
    matrix[i] = create1DCols(m);

    cout<<"Matrix elements : \n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}