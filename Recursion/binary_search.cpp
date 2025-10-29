#include<iostream>
using namespace std;

bool binarySearching(int arr[] , int x , int start , int end)
{
    
    int mid = (start+end)/2;

    if(start>end)
    return 0;

    if(arr[mid]==x)
    return 1;
    else if(arr[mid]<x)
    return binarySearching(arr,x,mid+1,end);
    else
    return binarySearching(arr,x,start,mid-1);
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the elemant to find in array : ";
    cin>>x;

    cout<<binarySearching(arr,x,0,n-1);


}