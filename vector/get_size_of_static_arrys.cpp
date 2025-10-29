#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elemant id array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int totalSize=sizeof(arr)/sizeof(arr[0]);
    cout<<totalSize;
}