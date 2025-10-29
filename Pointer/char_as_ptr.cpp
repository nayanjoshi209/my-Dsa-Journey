#include<iostream>
using namespace std;
int main()
{
    char arr[5]="2345";
    char* ptr = arr;

    cout<<arr<<endl; // value print kare ga jab tk null value nahi mile gi
    cout<<ptr<<endl<<endl;

    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl<<endl; // typeCasting for print address..

    char name='a';
    cout<<&name<<endl;
    cout<<name<<endl;
    char* ptr1=&name;
    cout<<ptr1<<endl;
    cout<<(void*)ptr1<<endl;

}