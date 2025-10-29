#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elemant of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
            swap(arr[j],arr[j-1]);  
            // int temp = arr[j];                   // Alternatine opecton 
            // arr[j]=arr[j-1];
            // arr[j-1]=temp;
            }
            else
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // return 0;
}