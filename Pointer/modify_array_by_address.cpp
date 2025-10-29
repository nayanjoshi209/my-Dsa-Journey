#include<iostream>
using namespace std;

void dob(int* p)
{
    for(int i=0;i<6;i++)
    {
        p[i] = 2*p[i];
    }
}

int main()
{
    int arr[5]={32,45,65,2,66};

    dob(arr);  // in array does not require to pass address

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}