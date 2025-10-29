// cheak array is sorted or not

#include<iostream>
using namespace std;

bool isSorted(int arr[] , int n)
{
    if(n==0 || n==1)
    return 1;

    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elemants : \n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<isSorted(arr,n);
}