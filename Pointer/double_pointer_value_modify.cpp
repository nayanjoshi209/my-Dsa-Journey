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
    cout<<*p2<<endl<<endl;

   // value midify by use of pointer

   *p=*p+5;           //singal pointer update
   cout<<n<<endl;

   **p1=**p1+5;       //double pointer update
   cout<<n<<endl;

   ***p2=***p2+5;    //triple pointer update
   cout<<n;
}