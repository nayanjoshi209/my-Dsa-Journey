#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n              Enter the size of array -> : ";
    cin>>n;
    int arr[n];
    int newArr[n-1];

    cout<< " \n              Enter the elemant of array ->: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int index;
    cout<< " \n                   Indexing of array start with 0 : ";
    cout<<"\n              Enter the Index of array of delections ->: ";
    cin>>index;

    for(int i=0;i<index;i++)
    {
        newArr[i]=arr[i];
    }
    // newArr[index]=arr[index+1];
    
    for(int i=index;i<n;i++)
    {
        newArr[i]=arr[i+1];
    }
    cout<<"\n\n         ----NEW ARRAY IS AFTER REMOVIENG INDEX---- "<<index<<"  IS--->>>";
    cout<<endl<<endl<<"      ";
    for(int i=0;i<n-1;i++)
    {
        cout<<newArr[i]<<"  ";
    }
    cout<<endl<<endl;
    return 0;
}