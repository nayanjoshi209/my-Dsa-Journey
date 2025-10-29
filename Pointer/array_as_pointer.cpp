#include<iostream>
using namespace std;
int main()
{
    int arr[6]={43,543,3,234,5,6};

    cout<<arr<<endl;
    int* ptr = arr;
    
    for(int i=0;i<6;i++)
    {
        cout<<arr+i<<endl;
    }
    
    for(int i=0;i<6;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
}