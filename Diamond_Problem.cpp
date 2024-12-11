/*Class student has member variable roll, a setter method and a display method for roll. Class ‘test’ inherits from class ‘student’ and has variable marks, a setter and a display method for marks. Class sports also inherits from student and has a variable ‘score’, a setter method and a display method which displays score. Class result inherits from class test and class sports, has a variable total= marks+ roll and displays score, marks ,roll and total.*/
#include<iostream>
using namespace std;
class student
{
    protected:
            int roll;
    public:
            void setter1()
            {
                cout<<"Enter the roll:"<<endl;
                cin>>roll;
            }
            void getter1()
            {
                cout<<"The roll:"<<roll<<endl;
            }
};
class test:virtual public student
{
    protected:
            int marks;
    public:
            void setter2()
            {
                cout<<"Enter the marks:"<<endl;
                cin>>marks;
            }
            void getter2()
            {
                cout<<"The marks:"<<marks<<endl;
            }
};
class sports:virtual public student
{
    protected:
            int score;
    public:
            void setter3()
            {
                cout<<"Enter the score:"<<endl;
                cin>>score;
            }
            void getter3()
            {
                cout<<"The score:"<<score<<endl;
            }
};
class result:public test,public sports
{
    private:
            int total;
    public:
            void total_result()
            {
                total=marks+score;
                cout<<"The total:"<<total<<endl;
            }
            void getter4()
            {
                getter1();
                getter2();
                getter3();
                cout<<"The total:"<<total<<endl;
            }
};
int main()
{
    result r;
    r.setter1();
    r.setter2();
    r.setter3();
    r.total_result();
    r.getter4();
    return 0;
}
