//subtract.cpp                                                                                                                     #include"header.h"
#include<iostream>
using namespace std;
void calculator::subtract()
{
    if(a>b)
        cout<<"Subtraction of "<<a<<" and "<<b<<":"<<(a-b)<<endl;
    else
        cout<<"Subtraction of "<<a<<" and "<<b<<":"<<(b-a)<<endl;
}
