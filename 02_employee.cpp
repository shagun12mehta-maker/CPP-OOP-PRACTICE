#include<iostream>
using namespace std;
class Employee
{
    public:
    int employee_id;
    string name;
    string department;
    double salary;

    void input()
    {
        cout<<"enter the employee id"<<endl;
        cin>>employee_id;
        cout<<"enter the name of th eemployee"<<endl;
        cin>>name;
        cout<<"enter the name of the department"<<endl;
        cin>>department;
        cout<<"enter the salary of the employee"<<endl;
        cin>>salary;
    }
    void display()
    {
         cout<<"the employee id is"<<" "<<employee_id<<endl;
          cout<<"the name of th eemployee is"<<" "<<name<<endl;
           cout<<"the name of the department is"<<" "<<department<<endl;
           cout<<"the salary of the employee is"<<" "<<salary<<endl;

    }
};
int main()
{
    Employee e1;
    e1.input();
    e1.display();

}
