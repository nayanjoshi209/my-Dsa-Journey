#include<iostream>
using namespace std;

int getValue(int* arr , int n, int k,int index)
{
    if(index==n-k)
    return arr[index]; 


    return getValue(arr,n,k,index+1);
}

int main()
{
    int n;
    int index=0;
    cout<<"Enter the size of shorted array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemants of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the k largest index of array : ";
    cin>>k;

    cout<<getValue(arr,n,k,0);

}