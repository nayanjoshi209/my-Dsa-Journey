#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;
int main()  
{
    ofstream file;
    
    int n;
    cout<<"Enter the size of data : ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the values of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    file.open("ZVSUP.txt");
    file<<"Original Data : \n";

    for(int i=0;i<n;i++)
    {
        file<<arr[i]<<' ';
    };

    file<<"\nSorted Data : \n";

    sort(arr.begin() , arr.end());

    for(int i=0;i<n;i++)
    {
        file<<arr[i]<<' ';
    };

    file.close();

}