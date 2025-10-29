#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of arrays : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    
    }

    int *ptr = arr;
    // int *ptr = &arr[0];

    for(int i=0;i<n;i++)
    {
        cout<<"Address of " <<i<<"th index is -"<<arr+i<<" & value is --> "<<*(ptr+i)<<endl;
    }
}