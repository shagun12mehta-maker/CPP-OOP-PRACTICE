#include<iostream>
using namespace std;
class Student
{
    public:
    int roll_no;
    string name;
    int marks;

    void accept()
    {
        cout<<"enter the roll no of the student"<<endl;
        cin>>roll_no;
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"enter the marks of the student"<<endl;
        cin>>marks;
    }
    void display()
    {
        cout<<"roll no of the student is"<<roll_no<<endl;
        cout<<"name of the student is"<<name<<endl;
        cout<<"marks of the student is"<<marks<<endl;
    }
};
    int main()
    {
        Student s1;
        s1.accept();
        s1.display();
    }


