#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream read;

    // open those file
    read.open("rdmAll.txt");

    // read those file
    char c; 
    c = read.get();

    // read one by one elemant by getline to avoid space
    while(!read.eof())
    {
        cout<<c;
        c = read.get();
    }

    // open file kko close kr do
    read.close();
}