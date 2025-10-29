#include<iostream>
using namespace std;

int countSubarr(int arr[] , int index , int n)
{
    if(index==n)
    return 1;

    int take = countSubarr(arr,index+1,n);

    int skip = countSubarr(arr,index+1,n);

    return take+skip;
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemants of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<countSubarr(arr,0,n);
}