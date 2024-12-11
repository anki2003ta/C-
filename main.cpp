//main.cpp                                                                                                          #include"header.h"
#include<iostream>
using namespace std;
int main()
{
    calculator obj(4,3);
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();
    obj.modulo();
    obj.exponent();
    return 0;
}
