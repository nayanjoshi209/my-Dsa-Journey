#include<iostream>
#include<string>
using namespace std;

bool cheakPal(string str , int start , int end)
{

    //Base Conditon 
    if(start>=end)
    return 1;

    // not-Matched
    if(str[start]!=str[end])
    return 0;

    //Mateched
    return cheakPal(str,start+1,end-1);

}

int main()
{
    string str;
    cout<<"Enter the palindrome string : \n";
    getline(cin,str);

    cout<<cheakPal(str , 0 ,4);
}