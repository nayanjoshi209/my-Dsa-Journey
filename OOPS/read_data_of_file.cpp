#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream accessFile;

    //File ko open karo
    accessFile.open("ZVS.txt"); 

    //text read karo
    int n;
    accessFile>>n;

    while(!accessFile.eof())
    {

        cout<<n<<' ';
        accessFile>>n;
    }
}