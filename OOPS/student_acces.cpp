#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int roll_No,marks;
    float persantage;

    public:

    void input()
    {
        cout<<"Enter the student name here : ";
        getline(cin,name);

        cout<<"Enter the roll number student : ";
        cin>>roll_No;

        cout<<"Enter the marks of student out of 600 : ";
        cin>>marks;

        persantage = ((float)marks/600)*100;
    }

    void display()
    {
        cout<<"\nstudent name is : "<<name;

        cout<<"\nroll number student is : "<<roll_No;

        cout<<"\nmarks of student out of 600 is : "<<marks;

        cout<<"\nand Also there persantage is : "<<persantage<<"%";

    }

};

int main()
{
    student Nayan;
    Nayan.input();
    Nayan.display();

}