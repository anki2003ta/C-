/*Class multiplier has a function to multiply two variables. Implement this using template class so that the multiply function can multiply variables for multiple data types.*/
#include<iostream>
using namespace std;
template<class T1=int,class T2=int>
class multiplier
{
    private:
            T1 a;
            T2 b;
    public:
            multiplier(T1 x,T2 y):a(x),b(y){}
            void multiply();
};
template<class T1,class T2>
void multiplier<T1,T2>::multiply()
{
    cout<<"Multiply a="<<a<<" and b="<<b<<" : "<<a*b<<endl;
}
int main()
{
    multiplier<int,float> obj(2,2.3);
    obj.multiply();
    multiplier<> obj1(2,2);
    obj1.multiply();
    return 0;
}
