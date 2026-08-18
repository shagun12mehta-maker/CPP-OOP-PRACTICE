#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    void accept()
    {
        cout<<"the length of the rectangle is"<<endl;
        cin>>length;
        cout<<"the breadth of the rectangle is"<<endl;
        cin>>breadth;
    }
     int area()
     {
        return length*breadth;

    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1;
    r1.accept();
   cout<<"the area of the rectangle is"<<" "<<r1.area()<<endl;
    cout<<"the perimeter of the rectangle is"<<" "<<r1.perimeter()<<endl;

}
