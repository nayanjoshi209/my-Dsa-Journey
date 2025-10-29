#include<iostream>
using namespace std;

int n=3,m=3;
int nums[3][3];

void rvseEachCol(int r , int c)
{
    if(r==n || c==m)
    return;

    cin>>nums[r][c];

    rvseEachCol(r,c+1);

    if(c==0)
    {
        cout<<'\n';

            int start=0,end=n-1;
       
            while(start<=end)
            {
                swap(nums[r][start],nums[r][end]);
                start++;
                end--;
            }

        rvseEachCol(r+1,c);  
    }
}

int main()
{
    cout<<"Enter the values of row & col : \n";

    rvseEachCol(0,0);

    //Print all values
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<nums[i][j]<<' ';
        }
        cout<<endl;
    }

}