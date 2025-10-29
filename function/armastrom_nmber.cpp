#include<iostream>
#include<math.h>
using namespace std;

int countDigite (int n)
{
    int count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

bool armstrong(int num , int digit)
{
    int n=num,rem,ans=0;
    while(n)
    {
        rem=n%10;
        n=n/10;
        ans=ans+pow(rem,digit);
    }
    if(ans==num)
    return 1;
    else
    return 0;

}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int digit = countDigite(num);
    cout<<armstrong(num,digit)<<endl;

}