#include<iostream>
using namespace std;
void prtArr(int* arr)  // pass array as a regrence 
{
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<' ';
    }
}
int main()
{
    int n[5]={1,2,34,56,77};

    prtArr(n);
}