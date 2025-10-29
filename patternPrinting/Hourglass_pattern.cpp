#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter the number of rows :: Executed for only ODD number : ";
    cin>>n;
    
    int leftMid=n+1;
    int rightMid=0;
    // int k=n+2;

    for(int i=1;i<=n/2+1;i++)
    {
        for(int j=n;j>=0;j--)
        {
            if(j<=rightMid || j>=leftMid)
            cout<<"  ";
            else
            cout<<"# ";
        }
        cout<<endl;
        leftMid--;
        rightMid++;
    }
    int midPoint = n/2;
    int midPoint1 = n/2+2;

    for(int i=n/2+2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   
            
            if(j>=midPoint && j<=midPoint1 )
            cout<<"# ";
            else
            cout<<"  ";
        }
        cout<<endl;
        midPoint1++;
        midPoint--;
    }
    return 0;
}