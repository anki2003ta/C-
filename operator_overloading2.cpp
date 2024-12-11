//pre-increment and post-increment
#include<iostream>
using namespace std;
class Index
{
    private:
        int v;
    public:
        Index()
        {
            v=0;
        }
        void display ()
        {
            cout<<v<<endl;
        }
        Index operator ++()
        {
            Index t=*this;
            //t.v=v;
            v+=1;
            return t;
        }
        Index operator ++(int)
        {
            Index t=*this;
            //t.v=v;
            v+=1;
            return t;
        }
};
int main()
{
    Index o1,o2;
    o2=++o1;
    o2.display();
    o1.display();
    Index a1,a2;
    a2=a1++;
    a2.display();
    a1.display();
    a2=a1++;
    a2.display();
    a1.display();
    return 0;
}
