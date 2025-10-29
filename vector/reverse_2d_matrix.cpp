#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the nuumber of row : ";
    cin>>n;

    int m;
    cout<<"Enter the number of col : ";
    cin>>m;

    int nums[n][m];
    cout<<"Enter the rows & colmns : \n";
    for(int i=0;i<n;i++)
    {
        cout<<'\n';
        for(int j=0;j<m;j++)
        {
            cin>>nums[i][j];
        }
    }
 

    // Reverse each col
    for(int i=0;i<n;i++)
    {
            
        int start =0 , end = m-1;
            while(start<=end)
            {
                swap(nums[i][start] , nums[i][end]);
                start++;
                end--;
            }

    }

    cout<<"your matrix is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<'\n';
        for(int j=0;j<m;j++)
        {
            cout<<nums[i][j]<<' ';
        }
    }


    
}