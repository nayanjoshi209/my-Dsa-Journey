#include<iostream>
using namespace std;

int arrSum(int arr[] , int n, int index , int sum)
{
    if(index==n)
    {
        return sum;
    }
    
    return arrSum(arr,n,index+1,sum+=arr[index]);
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<arrSum(arr,n,0,0);
}