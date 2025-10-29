#include<iostream>
using namespace std;

class ExamForm
{
    public:

    virtual void FormDetails()
    {
        cout<<"Its ans University  exam forms : ";  // by default without vurtual keyWord
    }
};

class ScExamForm : public ExamForm
{
    public:

    void FormDetails()
    {
        cout<<"Its ans Boards exam forms : ";
    }
};


int main()
{
    ExamForm *Ex;
    Ex = new ScExamForm();
    Ex->FormDetails();

}