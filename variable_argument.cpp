/*A student must answer a minimum of 3 questions. However, a student can also
answer more than 3 questions. In such a scenario the best three answers are
taken to compute the total score. A question paper can have a maximum of 5 questions
and each question carries 15 marks. Simulate the behaviour in a C++ program
that uses the concept of functions with variable number of arguments.*/
#include<iostream>
#include<stdarg.h>
using namespace std;
int total(int n,...)
{
    va_list myparams;
    va_start(myparams,n);
    int i,t=0,a;
    int maxScore[3]={0,0,0};
    for(i=0;i<n;i++)
    {
        a=va_arg(myparams,int);
        if(a>maxScore[0])
        {
            maxScore[2]=maxScore[1];
            maxScore[1]=maxScore[0];
            maxScore[0]=a;
        }
        else if(a>maxScore[1])
        {
            maxScore[2]=maxScore[1];
            maxScore[1]=a;
        }
        else if(a>maxScore[2])
        {
            maxScore[2]=a;
        }
    }
    va_end(myparams);
    for(i=0;i<3;i++)
    {
        cout<<maxScore[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        t=t+maxScore[i];
    }
    return t;
}
int main()
{
    int *a,n,i;
    while(1)
    {
        cout<<"Enter the no of questions you want to attempt:"<<endl;
        cin>>n;
        a=new int[n];
        if(n<3||n>5)
        {
            cout<<"please enter a valid no you want to attempt!"<<endl;
            return 0;
        }
        else
        {
            int t;
            cout<<"Enter the marks you want to enter:"<<endl;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            if(n==3)
            {
                t=total(n,a[0],a[1],a[2]);
            }
            else if(n==4)
            {
                t=total(n,a[0],a[1],a[2],a[3]);
            }
            else if(n==5)
            {
                t=total(n,a[0],a[1],a[2],a[3],a[4]);
            }
            cout<<"Total Marks Obtained:"<<t<<endl;
        }
    }
    return 0;
}
