#include<iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
    double price;

    void input()
    {
        cout<<"enter the title of the book "<<endl;
        cin>>title;
        cout<<"enter the author of the book "<<endl;
        cin>>author;

        cout<<"enter the price of the book "<<endl;
        cin>>price;

    }
    void display()
    {
        cout<<"the title of the book is"<<title<<endl;
        cout<<"the author of the book is"<<author<<endl;
        cout<<"price of the book is"<<price<<endl;
    }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
}
