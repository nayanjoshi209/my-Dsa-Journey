#include<iostream>
using namespace std;
int main()

{
    int n,k,count=0;
    cout<<"Enter the number of size of string : ";
    cin>>n;
    cout<<"Enter the size of sub_string :";
    cin>>k;

    for(int i=0;i<=n-k;i++)
    {
        // for(int j=i;j<i+k;j++)
        // {
        // }
            count++;

    }

    cout<<"The total size of this substring is : "<<count;
    return 0;
}