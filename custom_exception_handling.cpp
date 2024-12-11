/*In a triangle, the sum of two sides is greater than the third. If we are given three values a, b ,c then a+b>c; b+c>a; c+a>b. Write an exception class of your own in C++ that will be thrown if any one of the above conditions are not satisfied. Else evaluate the area of a triangle and display the output.*/
#include<iostream>
#include<exception>
#include<cmath>
using namespace std;
class myexception:public exception
{
    const char* what()const throw()
    {
        return "condition not satisfied";
    }
};
double sum(double a,double b,double c)
{
    double s,area;
        if((a+b)<=c||(b+c)<=a||(c+a)<=b)
        {
            throw myexception(); 
        }
        else
        {
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)(s-b)(s-c));
            return area;
        }
}
int main()
{
    double a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"Enter the value of c:"<<endl;
    cin>>c;
    try
    {
        double s=sum(a,b,c);
        cout<<"Area:"<<s<<endl;
    }
    catch(exception& e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}
