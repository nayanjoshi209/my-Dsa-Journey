#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number till you give cube : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<i<<" cube is-- "<<i*i*i<<endl;
    }
    return 0;
}
