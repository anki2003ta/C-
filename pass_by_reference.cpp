/*Class "Account" has the provision to accept multiple account numbers from a single person and store the balance of each account. Member function "transfer" can transfer the balance of one account to another, Write a C++ program to implement the same using the concept of passing the object of a class as a function parameter. Practice the program by passing the object once by reference.*/
#include<iostream>
using namespace std;
class Account
{
    private:
            int acc_no;
            double balance;
    public:
            void accept()
            {
                cout<<"Enter the account no:"<<endl;
                cin>>acc_no;
                cout<<"Enter the balance:"<<endl;
                cin>>balance;
                //cout<<"Enter the account to be transfered:"<<endl;
                //cin>>ammount_transfer;
            }
            void transfer_reference(Account &obj1,Account &obj2,double ammount_transfer)
            {
                if(obj1.balance>2000.0)
                {
                    obj1.balance-=ammount_transfer;
                    obj2.balance+=ammount_transfer;
                }
                else
                    cout<<"Insuffecient Balance!!"<<endl;
            }
            void display()
            {
                cout<<"The account no:"<<acc_no<<endl;
                cout<<"The balance:"<<balance<<endl;
            }
};
int main()
{
    Account a1,a2;
    a1.accept();
    a2.accept();
    a1.display();
    a2.display();
    a1.transfer_reference(a1,a2,500.0);
    a1.display();
    a2.display();
    return 0;
}
