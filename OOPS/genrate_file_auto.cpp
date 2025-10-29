#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream alcFile;
    alcFile.open("rdmAll.txt");

    alcFile<<"I LOVE YOU BABY ! ";

    alcFile.close();
}