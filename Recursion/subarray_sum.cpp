#include<iostream>
using namespace std;

void subSeqSum(int arr[] , int n , int index , int sum)
{
    if(index==n)
    {
        cout<<sum<<endl;
        
        return ;
    }

    // take
    subSeqSum(arr,n,index+1,sum+arr[index]);

    //skip
    subSeqSum(arr,n,index+1,sum);
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    subSeqSum(arr,n,0,0);
}