#include<iostream>
#include<vector>
using namespace std;

void subsetSum(int arr[] , int index , int n , int sum , vector<int>&ans)
{
    if(index==n)
    {
        ans.push_back(sum);
        return ; 
    }
    //not include
    subsetSum(arr,index+1,n,sum,ans);
    //include
    subsetSum(arr,index+1,n,sum+arr[index],ans);

}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemant of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>ans;

    subsetSum(arr,0,n,0,ans);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }

    
    return 0;
}