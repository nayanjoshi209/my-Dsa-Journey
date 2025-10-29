#include<iostream>
using namespace std;

class customer 
{
    string name;
    int accNum , Blnc;

    public:

    customer(string name , int accNum ,int Blnc)
    {
        this-> name = name;
        this-> accNum = accNum;
        this-> Blnc = Blnc;

    }

    void display()
    {
        cout<<name<<" "<<accNum<<" "<<Blnc<<" "<<endl;
    }

};


int main()
{
    customer a1("Nayan " , 25 ,25000);
    a1.display();
    customer a2("Hiren" ,26 , 25000);
    a2.display();
    
}