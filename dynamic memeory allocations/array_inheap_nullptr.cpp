#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of size : ";
    cin>>n;

    // int arr[n];
    int *ptr=new int[n];    

    cout<<"Enter the elemants : \n";
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }

    cout<<endl;
    
    delete[] ptr;
    cout<<ptr<<endl;   
    // now the delete ptr address now its contain random address in RAM 

    // ptr = nullptr;
    ptr = NULL;
    // after this in RAM no memory allocated in by ptr .. only 0 return & o return by Operating system
    cout<<ptr;
}