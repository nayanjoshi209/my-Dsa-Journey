#include<iostream>
using namespace std;

int countTargetSum(int arr[] , int n , int index , int target)
{

    if(target==0)
    return 1;

    if(index==n )
    return 0;

    //not include (skip)
    int skip = countTargetSum(arr,n,index+1,target-arr[index]);

    //include (take)
    int take  =  countTargetSum(arr,n,index+1,target);


    return take+skip;
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
    cout<<"Enter the number : ";
    cin>>target;

    cout<<countTargetSum(arr,n,0,target);

}