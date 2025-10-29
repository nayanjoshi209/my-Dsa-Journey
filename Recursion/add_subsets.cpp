#include<iostream>
#include<vector>
using namespace std;

void subsetSum(int arr[] , int index , int n , int sum)
{
    if(index==n)
    {
        cout<<sum<<endl;
        return ; 
    }
    //not include
    subsetSum(arr,index+1,n,sum);
    //include
    subsetSum(arr,index+1,n,sum+arr[index]);

}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemant of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // vector<int>ans;

    subsetSum(arr,0,n,0);

    // for(int i=0;i<n;i++)
    // {
    //     cout<<
    // }
}