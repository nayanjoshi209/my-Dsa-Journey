#include<iostream>
using namespace std;
int main()
{
    int n=50;
    int* ptr = &n;
    cout<<ptr<<endl;

    cout<<*ptr<<endl<<endl;

    n=100;
    cout<<ptr<<endl;
    cout<<*ptr<<endl<<endl;

    int m=5;
    int* k = &m;
    cout<<&k<<endl;
    cout<<*k<<endl<<endl;

    cout<<sizeof(k);

    // every size of pointer is default 8 bit by compailer dependency
}