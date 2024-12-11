/*Write a C++ program, as explained in class, to show the creation and destruction of objects. Assign a name to each object so that it becomes easier to identify which object gets created and which gets destroyed.*/
#include<iostream>
using namespace std;
class Test
{
    private:
            string s;
    public:
            Test(string a)
            {
                s=a;
                cout<<"Object "<<s<<" created."<<endl;
            }
            ~Test()
            {
                cout<<"Object "<<s<<" destroyed."<<endl;
            }
};
int main()
{
    Test o1("o1");
    Test o2("o2");
    {
        Test o3("o3");
        Test o4("o4");
    }
    return 0;
}
