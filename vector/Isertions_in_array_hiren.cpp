#include<iostream>
using namespace std;

int main()
{
    // Input the array size
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
        
    int arr[n], newArray[n+1];

    // Input the array values
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    // Input the position at where the input element has to be inserted
    int newElement, position;
    cout<<"Enter the position value where the new value has to be inserted: ";
    cin>>position;
    cout<<"Enter the new value ";
    cin>>newElement;
    
    // Insert the new element at the position
    newArray[position-1] = newElement;
    
    // Store the old values which are at the left side of position
    for(int i=0; i<position-1; i++)
    {
        newArray[i]=arr[i];
    }
    
    // Store the old values which are at the right side of position
    for(int i=position-1; i<=n; i++)
    {
        newArray[i+1] = arr[i];
    }
    
    // Print the new array
    for(int i=0; i<=n; i++)
    {
        cout<<newArray[i]<<" ";
    }

    return 0;
}