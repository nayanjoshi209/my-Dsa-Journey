    // cin>>n;
#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cout<<"Enter the numbers of rows : ";
    // cin>>n;

    char name = 'a';  
    for(char row=3;row<=6;row++) 
    {       
                 // small to cap both
        for(char col=1;col<=6;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}