#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    int NEWarr[n+1];
    cout<<"enter the number of elements ";
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        NEWarr[i+1]=arr[i];
    }

    int index;
    cout<<"enter the value of 0th index of array ";
    cin>>index;
    NEWarr[0]=index;

    for(int i=0;i<n+1;i++)
    {
        cout<<NEWarr[i]<<" ";
    }


}