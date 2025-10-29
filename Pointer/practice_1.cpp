#include<iostream>
using namespace std;
int main()
{
    char c[]="GATE2024";
    char* p = c;
    cout<<p+p[3]-p[1];    //starting se print hoga jab tak sapace nahi aaye ga (end tak)
}