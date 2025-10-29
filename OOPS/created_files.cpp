#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream nyn;

    nyn.open("zNewFile.txt");

    nyn<<"NEW CREATED...? ";

    nyn.close();

}