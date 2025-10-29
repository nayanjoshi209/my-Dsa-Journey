#include<iostream>
using namespace std;

int searchingNumber(int arr[] , int index , int number , int n)
{
    if(index==n)
    return -1;

    if(arr[index]==number)
    return index;

   return searchingNumber(arr,index+1,number,n);
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
    cout<<"Enter the number searching in array : (INDEXING WILL BE STARTING TO 0th INDEX ) -> ";
    cin>>number; 

    cout<<searchingNumber(arr,0,number,n);
}