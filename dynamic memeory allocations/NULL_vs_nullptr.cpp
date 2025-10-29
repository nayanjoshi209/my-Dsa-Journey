#include<iostream>
using namespace std;

void fn(int ptr)
{
    cout<<"This is your first funtion ";
}

void fn(int* ptr)
{
    cout<<"This is your secound funtion ";

}

int main()
{
    int* ptr = NULL;
    int* ptr1 = nullptr;

    // fn(NULL);
    // fn(nullPtr);
}