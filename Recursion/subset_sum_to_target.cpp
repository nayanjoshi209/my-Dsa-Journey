#include<iostream>
using namespace std;

bool findTarget(int arr[] , int index , int n , int target)
{
    if(target==0)
    return 1;

    if(target< 0 || index == n)
    return 0;

    return findTarget(arr,index+1,n,target) || findTarget(arr,index+1,n,target-arr[index]);
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the  elemants : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target values : ";
    cin>>target;

    cout<<findTarget(arr,0,n,target);

}