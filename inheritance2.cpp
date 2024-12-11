/*Write a Program, in which there's a class Publication which has title and price data type. There are also appropriate methods to set and get. There's another class Sales with number of copies, printed and sold with appropriate methods to set and get . The last class is a Book class which will contain as member objects of the above two classes (Object composition), and a data member variable no_of_pages. Use constructor to initialize variables to default (or suitable) values and use the objects of the included classes to call the constructors explicitly (according to the principles of object composition and delegation). Print all the data from within the book class. Program structure is given below.

class Publication {
     //body of class Publication
};
class Sales {
     //body of class Sales
};
class Book {
     …….
     Publication obj_pub ;
     Sales obj_sales;
      ….
};
Implement this using inheritance*/
#include<iostream>
using namespace std;
class Publication
{
    private:
            string title;
            double price;
    public:
            Publication()
            {
                cout<<"Publication"<<endl;
            }
            Publication(string t,double p):title(t),price(p){}
            void set()
            {
                cout<<"Enter the title:"<<endl;
                getline(cin,title);
                cout<<"Enter the price:"<<endl;
                cin>>price;
            }
            void get()
            {
                cout<<"The title:"<<title<<endl;
                cout<<"The price:"<<price<<endl;
            }
};
class Sales
{
    private:
            int no_of_copies;
            int no_of_printed;
            int no_of_sold;
    public:
            Sales()
            {
                cout<<"Sales"<<endl;
            }
            Sales(int nc,int np,int ns):no_of_copies(nc),no_of_printed(np),no_of_sold(ns){}
            void set()
            {
                cout<<"Enter the no of copies:"<<endl;
                cin>>no_of_copies;
                cout<<"Enter the no of printed:"<<endl;
                cin>>no_of_printed;
                cout<<"Enter the no of sold:"<<endl;
                cin>>no_of_sold;
            }
            void get()
            {
                cout<<"The no of copies:"<<no_of_copies<<endl;
                cout<<"The no of printed:"<<no_of_printed<<endl;
                cout<<"The no of sold:"<<no_of_sold<<endl;
            }
};
class Book:public Publication,public Sales 
{
    private:
            int no_of_pages;
    public:
            Book()
            {
                cout<<"Book"<<endl;
            }
            Book(string t,double p,int nc,int np,int ns,int n):Publication(t,p),Sales(nc,np,ns),no_of_pages(n){}
            void set()
            {
                Publication::set();
                Sales::set();
                cout<<"Enter the no of pages:"<<endl;
                cin>>no_of_pages;
            }
            void get()
            {
                Publication::get();
                Sales::get();
                cout<<"The no of pages:"<<no_of_pages<<endl;
            }
};
int main()
{
    Book b;
    b.set();
    b.get();
    Book b1("c",1200,29,20,19,100);
    b1.get();
}
