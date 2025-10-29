#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows :: (Enter  only odd numbers ) : ";
    cin>>n;
    int middleRow=n/2+1;
    int middlePoint=n/2+1;
    int middlePoint1=n/2+1;

    for(int row=1;row<=n;row++)
    {
        for(int column = 1;column<=n;column++)
        {
            if(column==middlePoint || column == middlePoint1 )
            cout<<"* ";

            else
            cout<<"  ";
        }
        cout<<endl;
        
        if(row<+middleRow)
        {
        middlePoint--;
        middlePoint1++;
        }
        else
        {
            middlePoint++;
            middlePoint1--;
        }
        
    }
    return 0;
}