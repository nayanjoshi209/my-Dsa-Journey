#include<iostream>
using namespace std;

int maxEl(int arr[] , int index , int n)
{
    // Base Condition
    if(index==n-1)
    {
        return arr[index];
    }

    return max(arr[index] , maxEl(arr,index+1,n));
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemants of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<maxEl(arr,0,n);

}