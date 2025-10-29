int sum(int a,int b)
{
    int ans=a+b;
    return ans;
};
#include<iostream>
using namespace std;
int main()
{
    int m,n,o,p;
    cout<<"Enter the value of M and N && O and P: ";
    cin>>m>>n>>o>>p;
    cout<<sum(m,n)<<endl;
    cout<<sum(o,p)<<endl;
}