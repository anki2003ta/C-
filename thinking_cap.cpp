#include<iostream>
#include<string.h>
using namespace std;
class ThinkingCap
{
    private:
            char green_string[50];
            char red_string[50];
    public:
            void slot(char new_green[],char new_red[])
            {
                if((strlen(new_green)>50)||(strlen(new_red)>50))
                {
                    throw "Invalid string length !!";
                }
                strcpy(green_string,new_green);
                strcpy(red_string,new_red);
            }
            void push_green()
            {
                cout<<green_string<<endl;
            }
            void push_red()
            {
                cout<<red_string<<endl;
            }
};
int main()
{
    ThinkingCap student;
    ThinkingCap fan;
    char str1[]="Hello";
    char str2[]="goodbye";
    char str3[]="Hii";
    char str4[]="Haa";
    try
    {
        student.slot(str1,str2);
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }
    try
    {
        fan.slot(str3,str4);
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }
    student.push_green();
    fan.push_green();
    student.push_red();
    fan.push_red();
    return 0;
}
