#include<iostream>
using namespace std;
int main()
{
    int n= 60;
    int* ptr = &n;
    ptr=NULL;
    ptr=nullptr;    

    // return type of null pointer is - NULL & nullptr     

    cout<<ptr<<endl;
    cout<<*ptr;
}