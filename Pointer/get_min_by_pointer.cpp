        // Find minimun elemant
#include<iostream>
using namespace std;
int main()
{
    int minValue=INT_MAX;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    int *ptr = arr;
    
    cout<<"Enter the elemants of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }

    for(int i=0;i<n;i++)
    {
        minValue=min(minValue,*(ptr+i));
    }

    cout<<"Minimum value of this array is : -- > "<<minValue;

}