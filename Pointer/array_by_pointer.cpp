#include<iostream>
using namespace std;

void eccesArr(int* arr , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<2*arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array : \n";
    cin>>n;

    int arr[n];
    cout<<"Enter the values of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int* ptr = arr;

    eccesArr(arr,n);
}