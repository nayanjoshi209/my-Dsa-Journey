#include<iostream>
using namespace std;

int minEl(int arr[] ,int index, int n)
{

    if(index==n-1)
    return arr[index];

    return min(arr[index] , minEl(arr,index+1,n));
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

    cout<<minEl(arr,0,n);
}