#include<iostream>
using namespace std;

void calculateSum(int n , int sum)
{
    // int totalSum;
    // totalSum+=n;
    sum+=n;

    // Base Condition
    if(n==0)
    {
        cout<<sum<<endl;
        return;
    }

    calculateSum(n-1,sum);
}

int main()
{
    int totalSum=0;
    int n;
    cout<<"Enter the elemant whose got sum of all numbers -> : ";
    cin>>n;

    calculateSum(n,totalSum);
}