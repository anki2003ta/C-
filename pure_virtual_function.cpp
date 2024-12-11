/*Class square and class rectangle inherit from class shape. Do the following:-
    a)  Class shape has a method area() which is overridden in all it's child classes. Use a pointer of type base class and make sure that the correct version of area() is called. That is either the area defined in shape or square or rectangle will be called.
    b)  Class shape has a method perimeter() which has to be overridden in all it's child classes. How would you ensure that?*/
#include<iostream>
using namespace std;
class shape
{
    protected:
                double side;
    public:
            shape(double s):side(s){}
            virtual void area()=0;
            virtual void perimeter()=0;
};
class square:public shape
{
    public:
            square(double s):shape(s){}
            void area()
            {
                cout<<"Area of square:"<<side*side<<endl;
            }
            void perimeter()
            {
                cout<<"Perimeter of square:"<<4*side<<endl;
            }
};
class rectangle:public shape
{
    protected:
                double b;
    public:
            rectangle(double s,double x):shape(s),b(x){}
            void area()
            {
                cout<<"Area of rectangle:"<<side*b<<endl;
            }
            void perimeter()
            {
                cout<<"Perimeter of rectangle:"<<2*(side+b)<<endl;
            }
};
int main()
{
    shape *s;
    s=new square(2);
    s->area();
    s->perimeter();
    s=new rectangle(2,3);
    s->area();
    s->perimeter();
    delete s;
    return 0;
}
