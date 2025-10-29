#include<iostream>
using namespace std;

void printEl(int arr[] , int n)
{
    if(n==-1)
    return ;
    
    cout<<arr[n]<<' ';
    printEl(arr,n-1);
}

int main()

{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemants : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    printEl(arr,n-1);
}