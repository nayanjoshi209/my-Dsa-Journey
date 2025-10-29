#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int k)
{
    int start,end,mid;
    start =0;
    end=n-1;
    // mid=(start+end)/2;

    while(start<=end)
    {
            mid=(start+end)/2;
            
        if(arr[mid]==k)
        return mid;

        else if(arr[mid]<k)
        start=mid+1;

        else
        end=mid-1;  
    }

    return -1;

}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemant of arraay : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the find valluue : ";
    cin>>k;

    cout<<binarySearch(arr,n,k)<<endl;

    return 0;
}