#include<iostream>
using namespace std;

bool Searching(int arr[] , int x ,int n, int index)
{
    //Base condition
    if(index==n)
    return 0; 

    if(arr[index]==x)
    return 1;

    return Searching(arr,x,n,index+1);
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Elemants : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the Element to find in array : ";
    cin>>x;

    Searching(arr,x,n,0);

}