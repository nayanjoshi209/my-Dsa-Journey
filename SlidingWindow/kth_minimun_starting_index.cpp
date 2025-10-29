// 0(n) time complexity ans Sliding window concept 
#include<iostream>
using namespace std;
int minStartIdx(int nums[],int &n)
{
    int k;
    cout<<"Enter the size of Winndow (K) : ";            
    cin>>k;
    cout<<"        ---- Indexing start with 0 ----\n";
    int start=0,end=0,currentWin=0,minSum=INT_MAX,minIdx=0;
    while(end<n)
    {
        currentWin+=nums[end];
        while(end-start+1==k)
        {
            if(currentWin<minSum)
            {
                minSum=currentWin;
                minIdx=start;
            }
            currentWin-=nums[start];
            start++;
        }
        end++;
    }
    cout<<"Your min sum is = "<<minSum<<endl<<"Index is  : " ;
    return minIdx;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<minStartIdx(arr,n);
    cout<<endl;
}