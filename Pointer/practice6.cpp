#include<iostream>
using namespace std;
int main()
{
    char ch[] = "heybabs";
    char *ptr = ch;

    cout<<ptr+ptr[3]-ptr[4]<<endl;   // starting se last tk print hoga jab tk space nahi aaye ga
    cout<<ch[3]<<endl;
}