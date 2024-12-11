/*Parent class 'shape' has a member variable side. Child classes 'square' and 'rectangle' inherit from the parent class. Calculate the area of square and rectangle.*/
#include<iostream>
using namespace std;
class shape
{
    protected:
        double side;
    public:
        shape(double a):side(a){}
};
class square:public shape
{
    public:
        square(double x):shape(x){}
        void area_square()
        {
            cout<<"Area of square:"<<side*side<<endl;
        }
};
class rectangle:public shape
{
    private:
        double b;
    public:
        rectangle(double x,double y):shape(x),b(y){}
        void area_rectangle()
        {
            cout<<"Area of rectangle:"<<side*b<<endl;
        }
};
int main()
{
    square s(2);
    s.area_square();
    rectangle r(2,3);
    r.area_rectangle();
    square s1(2.2);
    s1.area_square();
    rectangle r1(2.2,3.6);
    r1.area_rectangle();
    return 0;
}
