#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    // File open command
    ofstream nayan;
    nayan.open("soumandd.txt");  // Created new file  & openddd this

    // Written in this
    nayan<<"Hello Nayan : ";

// Is code ko chalaane par, ek file banaega jiska naam "example.txt" hoga aur usmein "Yeh mere file ka content hai." likha hoga. ";

    nayan.close();   // band file to pura hone ke baad bnd kr diya hai

}