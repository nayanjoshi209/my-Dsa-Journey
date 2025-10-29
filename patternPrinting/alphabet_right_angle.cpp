#include<iostream>
using namespace std;
int main()
{
    // char alp ='a';

    for(char row='a';row<='e';row++)
    {
        for(char col ='a';col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}