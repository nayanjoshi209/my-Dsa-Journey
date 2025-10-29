#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number of rows :: Enter only ODD number : ";
    cin>>n;
    int middleRight = n/2+1;
    int middleLeft = n/2+1;

    for(int row = 1; row<=n/2+1 ; row++)
    {
        for(int col =1; col<=n; col++)
        {
            if(col==middleRight || col == middleLeft || row==n/2+1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
        middleLeft--;
        middleRight++;
       
    }
    return 0;
}