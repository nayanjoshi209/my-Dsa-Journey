 #include<iostream>
using namespace std;

class student
{
    public :  // By Default all class are Private
    
    string name;
    int age,roll_no;
    string grade;
};

int main()
{
    student s1;

    s1.name = "Nayan Joshi \n";
    s1.age = 20;
    s1.roll_no = 141604;
    s1.grade = "A+";

    student s2;
    s2.name = "Soumya joshi \n";
    s2.age = 18;
    s2.roll_no =  2570376;
    s2.grade = "A+";

    student s3;
    s3.name = "Sourabh Roat \n";
    s3.age = 18;
    s3.roll_no = 2570377;
    s3.grade = "-D";

    cout<<s1.name<<' '<<endl;
    cout<<s1.age<<' '<<endl;
    cout<<s1.roll_no<<' '<<endl;
    cout<<s1.grade<<' '<<endl<<endl;

    cout<<s2.name<<' '<<endl;
    cout<<s2.age<<' '<<endl;
    cout<<s2.roll_no<<' '<<endl;
    cout<<s2.grade<<' '<<endl<<endl;

    cout<<s3.name<<' '<<endl;
    cout<<s3.age<<' '<<endl;
    cout<<s3.roll_no<<' '<<endl;
    cout<<s3.grade<<' '<<endl<<endl;
}