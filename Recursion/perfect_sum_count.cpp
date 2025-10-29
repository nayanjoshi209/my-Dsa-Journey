#include<iostream>
using namespace std;

int perfectSum(int arr[] , int index, int n , int target)
{
    if(index==n)
    return target==0;

    return perfectSum(arr,index+1,n,target)+perfectSum(arr,index+1,n,target-arr[index]);
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemants : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value : ";
    cin>>target;

    cout<<perfectSum(arr,0,n,target)<<endl;

}   