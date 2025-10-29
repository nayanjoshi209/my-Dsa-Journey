#include<iostream>
using namespace std;

bool SST(int arr[]  , int n,int index)
{

    //Base Con..
    if(arr[index]> arr[index+1])
    return 0;

    else if(index==n+1 || arr[index]==arr[index+1])
    return 0;

    else
    return 1;

    // take
    SST(arr,n,index+1);
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter any numbers of size  : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<SST(arr,n,0);
}