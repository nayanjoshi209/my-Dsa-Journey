#include<iostream>
#include<array>
using namespace std;
void arrayCall(int arr[])
{
    for(int i=0;i<5;i++)   
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{       // this type of array also ecces to funtions data type 
    array<int,5> arr={12,23,344,10,54};
    // arrayCall(arr);
}