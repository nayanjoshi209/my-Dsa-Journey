#include<iostream>
using namespace std;
int main()
{
    int n=40;
    int *p = &n;  // singal pointer
    int **p1 = &p;  // double pointer
    int ***p2= &p1;  // triple pointer

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p1<<endl;
    cout<<&p1<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<*p2<<endl;


}