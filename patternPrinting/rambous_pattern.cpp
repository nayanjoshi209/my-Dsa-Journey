#include<iostream>
using namespace std;
int main()
{
    int n=5,m=9;
    for(int r=1;r<=n*2;r++)
    {
    for(int c=n;c<=m;c++)
        {
            if(c<=m && c>=m-4)
            {
                cout<<"* ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
        n--;
    }
    return 0;
}