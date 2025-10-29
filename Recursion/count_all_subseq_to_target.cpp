#include<iostream>
using namespace std;

int subset(int arr[] , int n , int index , int target)
{
    if(index==n)
    // return 1;
    return target==0; // sum(target) mere 0 ke barabar hoga to 1 pass hoga

    // if(target>0)

    // dono me se kha bi 1 mila to return 1 ho jye ga
     //           skip                              take
    return subset(arr,n,index+1,target) + subset(arr,n,index+1,target-arr[index]);
}   

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemants : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target values  : ";
    cin>>target;

    cout<<subset(arr,n,0,target);
}