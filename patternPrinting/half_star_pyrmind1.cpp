#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
            //print space
            cout<<"  ";
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"* ";
        }
            cout<<endl;        
  
    }
      return 0; 
}