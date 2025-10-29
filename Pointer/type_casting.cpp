#include<iostream>
using namespace std;
int main()
{
    char c='45';
    // int* ptr = (int*)&c;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    int *ptr = (int*)&c;

    cout<<(void*)ptr<<endl;
    
 
}