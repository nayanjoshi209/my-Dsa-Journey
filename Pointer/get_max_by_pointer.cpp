        // Find maximum elemant

#include<iostream>
using namespace std;
int main()
{
    int maxValue=0;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    int* ptr = arr;

    cout<<"Enter the elemants of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }

    for(int i=0;i<n;i++)
    {
        maxValue=max(maxValue,*(ptr+i));
    }
    
    cout<<"maximun value  of this array is --> "<<maxValue;

}