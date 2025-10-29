#include<iostream>
using namespace std;
int n=5;
int m=n+1;

void copyFristHalf(int arr[] , int newArr[] , int indexx ,int idx) 
{
    if(indexx==idx)
    return;

    newArr[indexx] = arr[indexx];
    copyFristHalf(arr,newArr,indexx+1,idx);
}

void copySecoundHalf(int arr[] , int  newArr[] , int idx) 
{
    if(idx == m)
    return;

    newArr[idx] = arr[idx-1];
    copySecoundHalf(arr,newArr,idx+1);
}

int main()
{
    int arr[n] = {2,3,4,5,6};

    int idx=3,value=50;
    int newArr[m];
    newArr[idx]=value;

    copyFristHalf(arr,newArr,0,idx);
    copySecoundHalf(arr,newArr,idx+1);

    for(int i=0;i<m;i++)
    {
        cout<<newArr[i]<<' ';
    }

    return 0;
}