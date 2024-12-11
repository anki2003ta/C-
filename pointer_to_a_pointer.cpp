//pointer to a pointer
#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<"Address of A(*ptr):"<<ptr<<endl;
    cout<<"value of A(*ptr):"<<*ptr<<endl;
    cout<<"Address of A(*(*pptr)):"<<*pptr<<endl;
    cout<<"value of A(*(*pptr)):"<<*(*pptr)<<endl;

    cout<<"Address of (*ptr):"<<pptr<<endl;
    return 0;
}
