#include<iostream>
#include<vector>
using namespace std;

void allSubSeq(vector<int>& arr, vector<int>& nums , int n ,int index)
{
    // Base condition
    if(index==n)
    {
        for(int num : nums)
        cout<<num<<' ';
        cout<<endl;

        return ;

    }

    // for take
    nums.push_back(arr[index]);
    allSubSeq(arr,nums,n,index+1);
    nums.pop_back();

    // for skip
    allSubSeq(arr,nums,n,index+1);
}

int main()
{
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the values of vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>nums;

    allSubSeq(arr,nums,n,0);

    return 0;

}