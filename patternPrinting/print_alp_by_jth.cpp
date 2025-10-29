    // cin>>n;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers of rows : ";
    cin>>n;
    
    for(int row=1;row<=n;row++) 
    {       
                 // small to cap both
        for(int col=1;col<=n;col++)
        {   
            char name='a'+col-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}