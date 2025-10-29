#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"                 Enter the size of array -> : ";
    cin>>n;
    int arr[n];

    cout<<" \n\n\n                     Enter the element of arrays ::\n           --- ARRAY ELEMANT EXIST NON REPEATING VALUE --- :  ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the elemant should be searcing hre index :: value should be persent in arrays -> :";
    cin>>k;

    for(int i=0;i<=n;i++)
    {
        if(arr[i]==k)
        cout<<"\n\n\n      Element is --"<<k<<"-- Present in index -: " <<i<<endl;
    } 
    cout<<endl<<endl;
       
}