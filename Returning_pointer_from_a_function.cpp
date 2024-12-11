/*Returning pointer from a function*/
#include<iostream>
#define MAX 5
using namespace std;
int *func()
{
    static int a[MAX]={1,2,3,4,5};
    return a;
}
int main()
{
    int *ptr,i;
    ptr=func();
    for(i=0;i<MAX;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}
