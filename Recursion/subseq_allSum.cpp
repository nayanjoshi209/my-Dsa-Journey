#include<iostream>
#include<vector>

using namespace std;

void subSeqSum(int arr[] , int n , int index , int sum , vector<int>& ans)
{
    if(index==n)
    {
        cout<<sum<<endl;
        
        return ;
    }

    // take
    subSeqSum(arr,n,index+1,sum+arr[index],ans);

    //skip
    subSeqSum(arr,n,index+1,sum,ans);
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

    vector<int>ans;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }

    subSeqSum(arr,n,0,0,ans);
}