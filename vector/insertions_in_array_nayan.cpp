#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    int NEWarr[n+1];
    cout<<"enter the number of elements ";

    //insert array values
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // index value insert
    int index;
    int INSindex;
    cout<<"enter the palace of position (n>INSindex) ";
    cin>>INSindex;
    cout<<"enter the value of Nth index of array ";
    cin>>index;
    NEWarr[INSindex-1]=index;

    //index value overr

    for(int i=0;i<INSindex-1;i++)
    {
        NEWarr[i]=arr[i];
    }

    for(int i=INSindex-1 ;i<n;i++)
    {
        NEWarr[i+1]=arr[i];
    }

    for(int i=0;i<=n;i++)
    {
        cout<<NEWarr[i]<<" ";
    }

}