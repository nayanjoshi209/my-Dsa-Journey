#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=50;
    int newArr[6];
    for(int i=0;i<5;i++)
    {                                    // arrar size  ,element,indnum,                                    
        newArr[i+1]=arr[i];
    }
    newArr[0]=n;
    for(int i=0;i<6;i++)
    {
        cout<<newArr[i]<<" ";
    }
    
}