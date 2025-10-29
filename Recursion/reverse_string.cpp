#include<iostream>
#include<string>
using namespace std;

void rvsString(string& str , int start , int end)
{
    //Base Condition
    if(start>=end)
    return ;

    char c = str[start];
    str[start] = str[end];
    str[end]= c;

    rvsString(str , start+1 , end-1);
}

int main()
{
    string str;
    cout<<"Enter the palindrome string : \n";
    getline(cin,str);

    int n=str.size();

    rvsString(str ,0 , n-1);

    cout<<str;
}