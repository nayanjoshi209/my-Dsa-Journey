#include<iostream>
using namespace std;

char convert(char name)
{
    int ans=name-'a'+'A';
    return ans;
}

int main()
{
    char name;
    cout<<"Enter alphebet : ";
    cin>>name;
    cout<<convert(name);
}
    