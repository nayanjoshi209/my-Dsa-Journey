#include<iostream>
using namespace std;

int searchingNumber(int arr[] , int n , int number)
{
    for(int i=0;i<n;i++)
    {
        if(number == arr[i])
        return i;
    }

    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of array  : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemant of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int number;
    cout<<"Enter the number searching in array : ";
    cin>>number; 

    cout<<searchingNumber(arr,n,number);
}