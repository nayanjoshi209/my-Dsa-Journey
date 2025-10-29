#include<iostream>
using namespace std;
int main()
{
    // n is represented the size of array
    int n; 
    cout<<"Enter the  size of Array :- ";
    cin>>n;
    // value represented the same value of arrays removable
    int value;
    // user input array
    int arr[n];
    int newArr[n-1];
    // insitization of arrays by values
    cout<<"enter the values of arrays :- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // inisilizaton of value
    cout<<"enter the index which was removen in given array :: index will be start be the 1 :: the index should be avalible in input arrays :-  ";
    cin>>value;

    //insert value in array;
    newArr[value-1]=value;

    //paste values in new array before deletion
    for(int i=0;i<value-1;i++)
    {
        newArr[i]=arr[i];
    }

    //paste values in new array after deletion
    for(int i=value;i<n;i++)
    {
        newArr[i-1]=arr[i];
    }

    // print the values new arrays
    cout<<"your arrays is -- ";
    for(int i=0;i<n-1;i++)
    { 
       cout<<newArr[i]<<" ";
    }
}