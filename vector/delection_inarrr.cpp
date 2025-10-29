#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elemants of array : \n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the index you have removed values : ";
    cin>>k;

    int newArr[n-1];
    for(int i=0;i<k;i++)
    {
        newArr[i] = arr[i];
    }

    for(int i=k;i<n-1;i++)
    {
        newArr[i] = arr[i+1];
    }

    for(int i=0;i<n-1;i++)
    {
        cout<<newArr[i]<<' ';
    }

}