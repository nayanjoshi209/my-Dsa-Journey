#include<iostream>
using namespace std;


void fun3(int n)
{
    if(n==0)
    {
        // Base case
        cout<<"\n     : --- HAPPY BIRTHDAY --- : \n\n";
        return;
    }
    cout<<n<<" Days left from birthday : \n";
    fun3(n-1);
}

int main()
{
    int n=3;
    cout<<"Enter the days left from the birthday date : ";
    cin>>n;

    fun3(n);
    // fun2(2);
    // fun1(1);
    // fun0(0);
}