// Find minimun elemant

#include<iostream>
using namespace std;

int getMinElemant(int* arr, int n)
{
    int minValue=INT_MAX;
    for(int i=0;i<n;i++)
    {
        minValue=min(minValue,arr[i]);
    }
    
    return minValue;
}

int main()
{
    int n;
    cout<<"enter the size of elemant : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemants of arrays : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<getMinElemant(arr,n);
}