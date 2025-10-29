#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    
    int arr[n];
    cout<<"Enter the elements of array  : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the index the value will be inserted (indexing starting with 0th indexes) : ";
    cin>>k;

    int value;
    cout<<"Enter the values whoe`s inserted : ";
    cin>>value;
    
    int nums[n+1];

    for(int i=0;i<k;i++)
    {
        nums[i] = arr[i];
    }

    nums[k] = value;

    for(int i=k+1;i<=n;i++)
    {
        nums[i] = arr[i-1];
    }

    for(int i=0;i<=n;i++)
    {
        cout<<nums[i]<<' ';
    }

    return 0;
}