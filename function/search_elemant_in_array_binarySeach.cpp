#include<iostream>
using namespace std;

int searchingNumber(int arr[] , int start , int number , int end)
{
    int mid=(start+end)/2;

    // number equal to ememant
    if(arr[mid]==number)
    return mid;

    //Base Condition
    if(start>end)
    return -1;

    //number less then elemant
    else if(arr[mid]<number)
    return searchingNumber(arr,mid+1,number,end);

    // number greater then elemant
    else
    return searchingNumber(arr,start,number,mid-1);

}

int main()
{
    int n;
    cout<<"Enter the size of array  : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemant of array : (MENTION THE ARRAY BY ACCENDING ORDER BY IT`S SIZE : ) -> \n ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int number;
    cout<<"Enter the number searching in array : (INDEXING WILL BE STARTING TO 0th INDEX ) -> ";
    cin>>number; 

    cout<<searchingNumber(arr,0,number,n-1);
}