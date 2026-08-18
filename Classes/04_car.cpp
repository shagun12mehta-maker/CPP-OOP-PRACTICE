#include<iostream>
using namespace std;
class car
{
   public:
    string model;
    string brand;
    float price;
     
     void input()
     {
        cout<<"the model of the car is"<<endl;
        cin>>model;
        cout<<"the brand of the car is"<<endl;
        cin>>brand;
        cout<<"price of the car is"<<endl;
        cin>>price;
     }
     void display()
     {
        cout<<"the model of the car is"<<model<<endl;
        cout<<"the brand of the car is"<<brand<<endl;
        cout<<"the price of the car is"<<price<<endl;
     }
};
int main()
{
   car c1;
   c1.input();
   c1.display();
}
