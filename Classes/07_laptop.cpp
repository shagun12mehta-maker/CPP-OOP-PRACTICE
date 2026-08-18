#include<iostream>
using namespace std;
class laptop
{
    public:
    string brand_name;
    int ram;
    string processor;
    int storage;
    double price;

    void input()
{
        cout<<"enter the brand of the laptop is"<<endl;
        cin>>brand_name;
        cout<<"enter the ram of the laptop is"<<endl;
        cin>>ram;
        cout<<"enter the processor of the laptop is"<<endl;
        cin>>processor;
        cout<<"enter the storage of the laptop is"<<endl;
        cin>>storage;
        cout<<"enter the price of the laptop is"<<endl;
        cin>>price;
    }
    void display()
{
        cout<<"the brand of the laptop is"<<brand_name<<endl;
        cout<<"the ram of the laptop is"<<ram<<endl;
        cout<<"the processor of the laptop is"<<processor<<endl;
        cout<<"the storage of the laptop is"<<storage<<endl;
        cout<<"the price of the laptop is"<<price<<endl;
    }
};
int main(){
    laptop l1;
    l1.input();
    l1.display();
}
