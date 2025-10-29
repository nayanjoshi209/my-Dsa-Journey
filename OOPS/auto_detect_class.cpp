#include<iostream>
using namespace std;
class area
{
    public:

    int calculatedArea(int a)    
    {
        return 3.14*a*a;
    }

    int calculatedArea(int l , int b)
    {
        return l*b;
    }
};

int main()
{
    area A1,A2;
    cout<<A1.calculatedArea(25)<<endl;  // auto detect by its paremeters
    cout<<A2.calculatedArea(13,4);
    // cout<<A2.calculatedArea("Nayan"); // invalid statements


}