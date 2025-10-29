                // Brutefore code of threshold frequency
                // 0(n*n) Time complexity

#include<iostream>
using namespace std;

int idxThreshold(int arr[] , int& n , int threshold , int k)
{
    int count =0,avgSum=0,currentSum=0;

    for(int i=0;i<=n-k;i++)
    {
        currentSum=0;

        for(int j=i;j<i+k;j++)
        {
            currentSum+=arr[j];
           
        }
         avgSum=currentSum/k;

            if(threshold<=avgSum)
            {
                count++;
            }
    }

    return count;
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int threshold,k;

    int arr[n];
    cout<<"Enter the elemants of arrays : \n";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the threshold value : ";
    cin>>threshold;

    cout<<"Enter the Avg size of window (K) : ";
    cin>>k;

    cout<<idxThreshold(arr,n,threshold,k);
}

            // using Sliding window 0(n) Time complexity of threshold qn
// #include<iostream>
// using namespace std;

// int thresholdIdx(int arr[],int& n,int threshold , int k)
// {
   
//     int start=0,count=0,end=0,avgSum=0,windowSum=0;
    
//     while(end<n)
//     {
//         windowSum+=arr[end];
//         while(end-start+1==k)

//         {
//             avgSum=windowSum/k;
//             if(threshold<=avgSum)
//             {
//                 count++;
//             }

//             windowSum-=arr[start];
//             start++;
//         }

//         end++;
//     }

//     return count;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of the arrays : ";
//     cin>>n;

//     int threshold,k;

//     int arr[n];
//     cout<<"Enter the elemants of arrays : \n";

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Enter the threshold value : ";
//     cin>>threshold;

//     cout<<"Enter the Avg size of window (K) : ";
//     cin>>k;

//     cout<<thresholdIdx(arr,n,threshold,k);
// }
