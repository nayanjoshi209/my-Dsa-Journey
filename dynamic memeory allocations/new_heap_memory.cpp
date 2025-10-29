// Dynamic Memory Allocation  in heap memory by new keyword
#include<iostream>
using namespace std;
int main()
{
    int* ptr = new int;    // Dyanic memeory allocation  -- not is in stack memory
    *ptr = 5;
    cout<<*ptr<<endl;

    float* ptr2 = new float;  // Dyanic memeory allocation
    *ptr2 = 29.4;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int* p = new int[n];  // Dyanic memeory allocation
    // insert value of array
    for(int i=0;i<n;i++)
    {
        p[i]=i+1;  // yaha print nahi hoga saath me
    }

    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }

    //delete value(spaces) in heap mermory... now when uses succesfully
    delete ptr;
    delete ptr2;
    delete[] p;

}