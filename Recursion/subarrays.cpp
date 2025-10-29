#include<iostream>
using namespace std;

int subSeq(int arr[] , int index , int n)
{
    if(index==n)
    {
        return;
    }

    if(index>n)
    return 0;

    return subSeq(arr,index+1,n);

}

int main()
{
    int n;
    cout<<"Enter the number of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values of array  : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    subSeq(arr,0,n);
}