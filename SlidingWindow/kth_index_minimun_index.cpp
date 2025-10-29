#include<iostream>
using namespace std;

int kSizeAvg(int arr[], int& n)
{
    int k;
    cout<<"Enter the size of Index (K) : ";
    cin>>k;

    int start=0,end=0;
    int windowSum=0;
    int minSum=INT_MAX;

    while(end<n)
    {
        windowSum+=arr[end];
        while(end-start+1==k)
        {
            minSum=min(minSum,windowSum/k);
            windowSum-=arr[start];
            start++;
        }
        end++;
    }
    return minSum;
}
int main()
{
    int n;
    cout<<"Enter the size of arrays  : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<kSizeAvg(arr,n);

}