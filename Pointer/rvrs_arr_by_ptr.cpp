              // reverse array by ptr:::
#include<iostream>
using namespace std;
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

    int *start = arr;
    int *end = &arr[n-1];    

    while(start<end)
    {
        swap(*(start),*(end));
        start++;
        end--;
    }

    cout<<"'\n' your revese array value is "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}    