        // Sliding window consept
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    // insert value of array by user 
    cout<<"Enter the values of array respectively :: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sub_String values : ";
    cin>>k;
    int i=0,j=0,count=0;

    while(j<n)
    {
        if(j-i+1==k)
        {
            count++;
            i++;
        }
        j++;
    }
    cout<<"the COUNT of all sub_string is : "<<count;
}