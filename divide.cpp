//divide.cpp                                                                                                                      #include"header.h"
#include<iostream>
using namespace std;
void calculator::divide()
{
    if(b==0)
        cout<<"DIVISION BY zero not possible!"<<endl;
    else
        cout<<"Division of "<<a<<" and "<<b<<":"<<(a/b)<<endl;
}
