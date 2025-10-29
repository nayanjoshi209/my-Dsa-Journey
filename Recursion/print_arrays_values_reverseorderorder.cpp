#include<iostream>
using namespace std;

void printEl(int arr[] ,int index, int n)
{
    if(index==n)
    return;

    printEl(arr,index+1,n); 
    cout<<arr[index]<<' ';
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

    printEl(arr,0,n);
}