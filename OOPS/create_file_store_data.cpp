#include<iostream>
#include<fstream>

using namespace std;
int main()  
{
    ofstream file;
    
    int n;
    cout<<"Enter the size of data : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    file.open("ZVS.txt");

    for(int i=0;i<n;i++)
    {
        file<<arr[i]<<' ';
    };

    file.close();

}