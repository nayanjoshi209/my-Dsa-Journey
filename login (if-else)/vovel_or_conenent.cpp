#include<iostream>
using namespace std;
int main()
{
    char Alphabet;
    cout<<"Enter the Alphabet : ";
    cin>>Alphabet;

    if(Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o' || Alphabet == 'u')
    cout<<"is an vovel : ";
    else
    cout<<"is an conconent : ";
    return 0;
}