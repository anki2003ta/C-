/*Classes four_wheeler and two_wheeler inherit from the parent class vehicle. Class data members and member functions will depend on you. Hence each implementation is expected to be unique. Ultimate objective is to display the name and mileage of a 2 or 4 wheeler (along with other details of
your choice) depending on user input. Since this is a program on inheritance design the program such that meaningful properties are inherited.*/
#include<iostream>
#include<string.h>
using namespace std;
class vehicle
{
    private:
            string name;
            double consumed;
            double distance;
            double mileage;
    public:
            vehicle(string n,double f,double d):name(n),consumed(f),distance(d){}
            void input()
            {
                cout<<"Enter the name:"<<endl;
                cin>>name;
                cout<<"Enter the fuel consumed:"<<endl;
                cin>>consumed;
                cout<<"Enter the distance:"<<endl;
                cin>>distance;
            }
            void display()
            {
                cout<<"The name:"<<name<<endl;
                cout<<"The fuel consumed:"<<consumed<<endl;
                cout<<"The distance:"<<distance<<endl;
                cout<<"The mileage:"<<calculate_mileage()<<endl;
            }
            double calculate_mileage()
            {
                mileage=distance/consumed;
                return mileage;
            }
};
class four_wheeler:public vehicle
{
    public:
            four_wheeler(string n,double f,double d):vehicle(n,f,d){}
            void input()
            {
                vehicle::input();
                cout<<"four_wheeler input"<<endl;
            }
            void display()
            {
                vehicle::display();
                cout<<"four_wheeler display"<<endl;
            }
};
class two_wheeler:public vehicle
{
    public:
            two_wheeler(string n,double f,double d):vehicle(n,f,d){}
            void input()
            {
                vehicle::input();
                cout<<"two_wheeler input"<<endl;
            }
            void display()
            {
                vehicle::display();
                cout<<"two_wheeler display"<<endl;
            }
};
int main()
{
    four_wheeler f("Range Rover",12.3,3.5);
    //four_wheeler f;
    //f.input();
    f.display();
    two_wheeler t("Range Rover",12.3,3.5);
    //two_wheeler t;
    //t.input();
    t.display();
    return 0;
}
