#include<iostream>
using namespace std;

int main()
{
    int arr[5]={43,54,23,21,65};
    int* ptr = &arr[0];

    for(int i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
}