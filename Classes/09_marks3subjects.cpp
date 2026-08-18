#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    string name;
    int marks[3];
    int total=0;
void accept()
{
    cout<<"enter the rollno of the student is"<<endl;
    cin>>rollno;
    cout<<"enter the name of the student is"<<endl;
    cin>>name;

    for(int i=0;i<3;i++){
        cout<<" enter marks of the student in subject"<<i+1<<endl;
        cin>>marks[i];
    }
}
void display()
{
    cout<<"the rollno of the student is"<<rollno<<endl;
    cout<<" the name of the student is"<<name<<endl; 
    for(int i=0;i<3;i++){
        cout<< "marks of the student in subject"<<i+1<<"is"<<marks[i]<<endl;   
    }
}
void calculatetotal()
{
    total=0;
    for(int i=0;i<3;i++)
{
        total+=marks[i];
    }
    cout<<"total marks is"<<total<<endl;
}
void calculatepercentage(){
float percentage=((float)total/300)*100;
cout<<"the percentage of the student is"<<percentage<<endl;}
};
int main()
{
    Student s1;
    s1.accept();
    s1.display();
    s1.calculatetotal();
    s1.calculatepercentage();
}
