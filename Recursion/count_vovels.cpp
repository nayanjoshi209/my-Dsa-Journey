#include<iostream>
#include<string>
using namespace std;

int countVovels(string str , int index)
{
    //Base Condition
    if(index==-1)
    return 0;

    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u'  )
    return 1+countVovels(str,index-1);

    else
    return countVovels(str,index-1);
}

int main()
{
    string str;
    cout<<"Enter the palindrome string : \n";
    getline(cin,str);

    int n=str.size();

    cout<<countVovels(str ,n-1);
}