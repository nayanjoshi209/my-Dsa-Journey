#include<iostream>
using namespace std;
int main()

{
    int n,count=0;
    cout<<"Enter the size of string :";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            count++;
        }
    }
    cout<<"Total valid substance : "<<count;

    return 0;
}