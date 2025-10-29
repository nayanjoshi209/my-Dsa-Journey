              
#include<iostream>
using namespace std;
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

    for(int i=n;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

}    