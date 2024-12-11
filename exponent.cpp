//exponent.cpp                                                                                                               #include"header.h"
#include<iostream>
using namespace std;
void calculator::exponent()
{
    int x=1;
    for(int i=1;i<=b;i++)
    {
        x=x*a;
    }
    cout<<"Exponent of "<<a<<" and "<<b<<":"<<x<<endl;
}
