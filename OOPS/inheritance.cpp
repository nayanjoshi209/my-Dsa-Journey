 // public
 // protected
 // private (default)

#include<iostream>
using namespace std;

class human
{
    public:
    int age , weight;
    string name;

};
    // public to protected

class student :  protected human
{
    private:
    int rollN0,fees;

    public:

    void fun(string n , int a , int w)
    {
        name = n;
        age = a;
        weight =w;
    }

    void display()
    {
        cout<<name<<' '<<age<<' '<<weight<<' '<<endl;
    }

};

int main()
{
    student s1;
    s1.fun("nnyynn" , 34,45543);
    s1.display();
}
