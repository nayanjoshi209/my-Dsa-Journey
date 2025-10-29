#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    int* ptr = arr;
    int** ptr2 = &ptr;
    int calculateSum=0;
    int* addresss= &calculateSum;

    cout<<"Enter the elemant of arraay : \n";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }

    for(int i=0;i<n;i++)
    {
        // *addresss = *addresss+**(ptr2+i);
        *addresss = *addresss+*(*(ptr2)+i); //frist goes of add -2n and then goes address and execuate value
        *addresss = *addresss+*(ptr+i); 
    } 

    cout<<(*addresss);

}