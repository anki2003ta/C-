#include<iostream>
using namespace std;
void swap_address(int *a,int *b)
{
    cout<<"Before swap inside swap_address(int *a,int *b):a= "<<*a<<" b= "<<*b<<endl;
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"After swap inside swap_address(int *a,int *b):a= "<<*a<<" b= "<<*b<<endl;
}
void swap_value(int a,int b)
{
    cout<<"Before swap inside swap_value(int a,int b):a= "<<a<<" b= "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swap inside swap_value(int a,int b):a= "<<a<<" b= "<<b<<endl;
}
void swap_reference(int &a,int &b)
{
    cout<<"Before swap inside swap_reference(int &a,int &b):a= "<<a<<" b= "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swap inside swap_reference(int &a,int &b):a= "<<a<<" b= "<<b<<endl;
}
int main()
{
    int m1,n1,m2,n2,m3,n3;
    cout<<"Enter the  value of m1:"<<endl;
    cin>>m1;
    cout<<"Enter the  value of n1:"<<endl;
    cin>>n1;
    cout<<"Before swap inside main() by value:m1= "<<m1<<" n1= "<<n1<<endl;
    swap_value(m1,n1);
    cout<<"After swap inside main() by value:m1= "<<m1<<" n1= "<<n1<<endl;
    cout<<endl;
    cout<<"Enter the  value of m2:"<<endl;
    cin>>m2;
    cout<<"Enter the  value of n2:"<<endl;
    cin>>n2;
    cout<<"Before swap inside main() by address:m2= "<<m2<<" n2= "<<n2<<endl;
    swap_address(&m2,&n2);
    cout<<"After swap inside main() by address:m2= "<<m2<<" n2= "<<n2<<endl;
    cout<<endl;
    cout<<"Enter the  value of m3:"<<endl;
    cin>>m3;
    cout<<"Enter the  value of n3:"<<endl;
    cin>>n3;
    cout<<"Before swap inside main() by reference:m3= "<<m3<<" n3= "<<n3<<endl;
    swap_reference(m3,n3);
    cout<<"After swap inside main() by reference:m3= "<<m3<<" n3= "<<n3<<endl;
    return 0;
}
