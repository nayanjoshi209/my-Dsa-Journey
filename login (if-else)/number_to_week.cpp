#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number :: 1 to 7 : ";
    cin>>number;
    
    if(number==1)
    cout<<"is Sunday ";
    else if(number==2)
    cout<<"is Monday ";
    else if(number==3)
    cout<<"is Thuesday  ";
    else  if(number==4)
    cout<<"is Wednesday ";
    else  if(number==5)
    cout<<"is Thrisday ";
    else if(number==6)
    cout<<"is Friday ";
    else if(number==7)
    cout<<"is Saturday ";
    else
    cout<<"Enter valid number : 1-7 ";
    return 0;
}
