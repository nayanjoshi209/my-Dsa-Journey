#include<iostream>
using namespace std;

int sum1(int& x , int& y)
{
    x=45;
    y-=2;
    return x+y;
}

int sum2(int* x , int* y)
{
    *x = 45;
    *y -= 2;
    return *x+*y;
}

int main()
{
    int a=4,b=1;
    cout<<a<<" "<<b<<endl;
    sum2(&a,&b);
    cout<<a<<" "<<b;
}