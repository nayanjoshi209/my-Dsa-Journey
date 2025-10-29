             // Find minimum sum of aray with O(n) Time Complexity
#include<iostream>
using namespace std;

int minWindowSum(int arr[], int& n)
{
    cout<<"Insert the values of arrays : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the size of Window(K) : ";
    cin>>k;

    int start=0,end=0,currentWindowSum=0,minSum=INT_MAX;

    while(end<n)
    {
        currentWindowSum+=arr[end];
        if(end-start+1==k)
        {
            minSum=min(currentWindowSum,minSum);
            currentWindowSum-=arr[start];
            start++;
        }
        end++;
    }
    return minSum;
}
int main()
{
    int n;
    cout<<"Enter the size of arrray  : ";
    cin>>n;

    int arr[n];
    cout<<minWindowSum(arr,n);
}