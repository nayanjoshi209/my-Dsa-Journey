        // Find maximun elemant

#include<iostream>
using namespace std;

int getMaxElemant(int* arr , int n)
{
    int maxElemant=0;
    for(int i=0;i<n;i++)
    {
        maxElemant = max(maxElemant,arr[i]);
    }
    return maxElemant;
}

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

    cout<<getMaxElemant(arr,n);
}