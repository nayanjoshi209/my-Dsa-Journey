#include<iostream>
using namespace std;

void delectionArr(int arr[] , int  k , int newArr[] , int index)
{
    if(index == k)
    return ;

    newArr[index] = arr[index];
    delectionArr(arr,k,newArr,index+1);
}
void secoundHalf(int arr[] ,int newArr[] , int index , int m)
{
    if(index==m)
    return;

    newArr[index] = arr[index+1];
    secoundHalf(arr,newArr,index+1,m);

}

int main()
{
     int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elemants of array : \n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the index you have removed values : ";
    cin>>k;

    int m=n-1;
    int newArr[m];
    delectionArr(arr , k ,newArr , 0);
    secoundHalf(arr,newArr,k,n-1);

    // pirnt the newArr
    for(int i=0;i<m;i++)
    {
        cout<<newArr[i]<<' ';
    }

}