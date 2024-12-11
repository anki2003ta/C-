/*Object given to you is a coin. Model the behaviour of a coin toss. Coin toss will include 
          a. Making a call 
          b. tossing the coin 
          c. analyzing the outcome 
          d. declaring the outcome. 
     Use a simple structure for the program using class(es) and object(s). Put the different functionalities in diffferent functions.*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
//#include<string.h>
using namespace std;
class TossCoin
{
    private:
        string call;
        string choice;
    public:
        void makecall()
        {
            cout<<"Enter Your Choice:(Head/Tail)"<<endl;
            cin>>call;
        }
        void tossCoin()
        {
            cout<<"Toss Coin:"<<endl;
            srand(time(0));
            int random=rand()%2;
            if(random==0)
            {
                choice="Head";
            }
            else
            {
                choice="Tail";
            }
        }
        void analyze()
        {
            if(choice==call)
            {
                cout<<"You win!"<<endl;
            }
            else
            {
                cout<<"You loss!"<<endl;
            }
        }
        void declare()
        {
            cout<<"Your choice:"<<call <<endl;
            cout<<"Toss outcome:"<<choice<<endl;
        }
};
int main()
{
    TossCoin obj;
    obj.makecall();
    obj.tossCoin();
    obj.analyze();
    obj.declare();
    return 0;
}
