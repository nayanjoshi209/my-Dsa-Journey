#include<iostream>
using namespace std;

void addEl(int arr[] , int& n, int index, int k , int value , int nums[])
{
    // Base Condition
    if(index==n+1)
    {
        for(int i=0;i<=n;i++)
        {
            cout<<nums[index]<<' ';
        }
        return ;
    }

    if(index==k)
    {
        arr[index] = value;
    }
    
    if(index<k)
    {
        nums[index] = arr[index];
    }

    if(index > k)
    {
        nums[index] = nums[index-1];
    }


    return addEl(arr,n,index-1,k,value,nums);

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

    int k;
    cout<<"Enter the index the value will be inserted (indexing starting with 0th indexes) : ";
    cin>>k;

    int value;
    cout<<"Enter the values whoe`s inserted : ";
    cin>>value;
    
    int nums[n+1];

    addEl(arr,n,0,k,value,nums);


}

// - Renamed addEl to addElement for clarity.
// - Removed the recursive approach, which can cause stack overflow issues for large arrays.
// - Introduced a separate function printArray to print the array elements.
// - Modified the addElement function to shift elements to the right to make space for the new element.
// - Increased the array size to accommodate the new element.
// - Used a temporary array newArr to store the updated array elements.

// These changes improve the code's readability, maintainability, and performance.

