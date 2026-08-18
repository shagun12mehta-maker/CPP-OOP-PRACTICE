#include<iostream>
using namespace std;
class mobile
{
    public:
    string name;
    int ram;
    int storage;
    int battery_capacity;
    double price;
    void input()
{
        cout<<"enter the name of the company of mobile is"<<endl;
        cin>>name;
        cout<<"enter the ram of the mobile"<<endl;
        cin>>ram;
        cout<<"enter the storage of the mobile"<<endl;
        cin>>storage;
        cout<<"enter the battery capacity of the mobile is"<<endl;
        cin>>battery_capacity;
        cout<<"enter the price of the mobile is"<<endl;
        cin>>price;
    }
    void display()
{
        cout<<"the price of the mobile is"<<price<<endl;
        cout<<"the ram of the mobile is"<<ram<<endl;
        cout<<"the storage of the mobile is"<<storage<<endl;
        cout<<"the battery capacity of the mobile is"<<battery_capacity<<endl;
        cout<<"the price of the mobile is"<<price<<endl;
}
};
int main(){
    mobile m1;
    m1.input();
    m1.display();
}
