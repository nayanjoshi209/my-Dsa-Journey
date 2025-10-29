#include<iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"\n          Enter the size of array -> : ";
    cin>>n;
    int arr[n];
    int newArr[n+1];

    cout<<"\n         Enter the values of array -> : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int index,value;
    cout<<"\n\n          Enter the index of array -> : ";
    cin>>index;

    cout<<"          Enter  the value insert in array -> : ";
    cin>>value;

    for(int i=0;i<index;i++)
    {
        newArr[i]=arr[i];
    }
    newArr[index]=value;
    
    for(int i=index;i<n+1;i++)
    {
        newArr[i+1]=arr[i];
    }
    cout<<"\n\n            ------- NEW ARRAY IS AFTER ADD VALUE- "<<value<<"  IN INDEX - "<<index<<"----> ";
    cout<<endl<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<newArr[i]<<"  ";
    }
}