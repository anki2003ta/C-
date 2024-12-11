/*WAP to implement two classes Employee and Boss. Take Emp name and age as input. Employee id gets generated automatically when a new employee (object of employee class) is created. Boss decides the salary of employee. Also, Boss has the capability to increase the salary (Employee has a variable named salary) of the Employee.*/
#include<iostream>
#include<time.h>
#include<string.h>
using namespace std;
class Employee;
class Boss
{
    private:
            int increment;
    public:
            void set_salary(Employee &obj1);
            void set_increment();
            void increment_salary(Employee &obj2);
};
class Employee
{
    private:
            string name;
            int age;
            int id;
            double salary;
    public:
            Employee()
            {
                id=rand();
            }
            void input()
            {
                srand(time(0));
                cout<<"Enter the Name:"<<endl;
                getline(cin,name);
                cout<<"Enter the Age:"<<endl;
                cin>>age;
                salary=0.0;
            }
            void display()
            {
                cout<<"The Employee Id:"<<id<<endl;
                cout<<"The Name:"<<name<<endl;
                cout<<"The Age:"<<age<<endl;
                if(salary>0.0)
                {
                    cout<<"The Salary:Rs"<<salary<<endl;
                }
            }
            friend void Boss::set_salary(Employee &obj1);
            friend void Boss::increment_salary(Employee &obj2);
};
void Boss::set_salary(Employee &obj1)
{
    cout<<"Enter the Salary:"<<endl;
    cin>>obj1.salary;
}
void Boss::set_increment()
{
    cout<<"Enter the Increment:"<<endl;
    cin>>increment;
}
void Boss::increment_salary(Employee &obj2)
{
    obj2.salary=obj2.salary+increment;
}
int main()
{
    Boss b;
    Employee e;
    e.input();
    e.display();
    b.set_salary(e);
    b.set_increment();
    b.increment_salary(e);
    e.display();
    return 0;
}
