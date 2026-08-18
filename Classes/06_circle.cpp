#include<iostream>
using namespace std;
class car
{
    public:
    int r;
    void input()
    {
        cout<<"enter the value of the radius"<<endl;
        cin>>r;
    }
    int area()
    {
        return 3.14*r*r;
    }
    int circumference()
    {
        return 2*3.14*r;
    }
};
int main()
{
    car c1;
    c1.input();
    cout<<"area of the circle is"<<c1.area()<<endl;
    cout<<"circumference of the circle is"<<c1.circumference()<<endl;
}

