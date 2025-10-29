#include<iostream>
using namespace std;
class student
{
    string name;
    int rollNo , claass;
    float prevPersantage;

    public:

    student(string name , int rollNo , int claass ,float prevPersantage)
    {
        this->name =  name;
        this->rollNo = rollNo;
        this->claass =  claass;
        this->prevPersantage = prevPersantage;

    }

    void display()
    {
        cout<<name<<' '<<rollNo<<' '<<claass<<' '<<prevPersantage<<endl;
    }
};

int main()
{
    student s1("Nayan" , 16 , 8 , 89.45);
    s1.display();
    
    student s2("Hiren" , 11 , 8 , 94.90);
    s2.display();

    student s3("Shubham " , 21 , 8 , 85.43);
    s3.display();

    student s4("Soumya " , 22 , 8 , 84.28);
    s4.display();
}