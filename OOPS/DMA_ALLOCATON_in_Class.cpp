#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll_no , age;
    string grade;
    
};

int main()
{
    student *s1 = new student; // Heap Memory Allocation
    student *s2 = new student;
    student *s3 = new student; // NEw Keyword for heap memory allocation


    (*s1).name = "Nayan johi";
    (*s1).age = 20;
    (*s1).roll_no = 141604;
    (*s1).grade = "A+";

    (*s2).name = "Hiren johi";
    (*s2).age = 22;
    (*s2).roll_no = 141654;
    (*s2).grade = "A+";

    (*s3).name = "Shubham johi";
    (*s3).age = 24;
    (*s3).roll_no = 141674;
    (*s3).grade = "A+";


    cout<<(s1->name)<<endl;  // Pointer valrbiles acces by this (->) operator
    cout<<s1->grade<<endl;
    cout<<s1->age<<endl;
    cout<<s1->roll_no<<endl<<endl;

    cout<<(s2->name)<<endl;  // Pointer valrbiles acces by this (->) operator
    cout<<s2->grade<<endl;
    cout<<s2->age<<endl;
    cout<<s2->roll_no<<endl<<endl;


    cout<<(s3->name)<<endl;  // Pointer valrbiles acces by this (->) operator
    cout<<s3->grade<<endl;
    cout<<s3->age<<endl;
    cout<<s3->roll_no<<endl<<endl;



}