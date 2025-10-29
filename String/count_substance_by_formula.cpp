#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter the number of size of string : ";
    cin>>n;

    cout<<"The total size of all substring is : "<<(n*(n+1)/2);
    return 0;
}