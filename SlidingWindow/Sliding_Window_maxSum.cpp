         // Find maximum sum of aray with O(n) Time Complexity
#include<iostream>
using namespace std;
int windowSum(int arr[] ,  int& n)
{
    cout<<"Insert the element of arrays : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of FIXED SIZE (K)  : ";
    cin>>k;

    int start=0,end=0,currentWindow=0,totalSum=0;

    while(end<n)  
    {
        currentWindow+=arr[end];
        if(end-start+1==k)
        {
            totalSum=max(totalSum,currentWindow);
            currentWindow-=arr[start];
            start++;
        }
        end++;
    }
    return totalSum;
}
int main()
{
    int n;
    cout<<"Enter the size of arrays  : ";
    cin>>n;
    int arr[n];

    cout<<windowSum(arr,n);
}