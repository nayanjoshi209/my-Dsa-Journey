#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows :: (Enter  only odd numbers ) : ";
    cin>>n;
    int middlePoint=n/2+1;
    int middlePoint1=n/2+1;

    for(int row=1;row<=n/2+1;row++)
    {
        for(int column = 1;column<=n;column++)
        {
            if(column==middlePoint || column == middlePoint1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        middlePoint--;
        middlePoint1++;
    }

    int leftStar = 2;
    int rightStar=n-1;
    for(int row=n/2+2;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
        {
            // if(rightStar==leftStar)
            // break;
            if(column==leftStar || column == rightStar)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        leftStar++;
        rightStar--;
    }
    return 0;
}